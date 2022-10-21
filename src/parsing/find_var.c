/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_var.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaghazar <vaghazar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:44:23 by vaghazar          #+#    #+#             */
/*   Updated: 2022/10/18 21:31:01 by vaghazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

char	*find_var(char *src, char **ptr, int j)
{
	int	i;
	char	*res;
	int		len;

	i = 0;
	len = 0;
	res = NULL;
	if (!src)
		return (NULL);
	while (src[j])
	{
		if (src[j] == '$')
		{
			*ptr = &src[j++];
			while (src[j] && (!ft_strchr(METACHARS, src[j] && (src[j] != '$' && src[j] != '\'' && src[j] != '"')))
			 && !ft_strchr(SPACES, src[j]) && ++(j))
				len++;
			res = malloc(sizeof(char) * len + 1);
			if (!res && !ft_perror("minishell"))
				return (NULL);
			while (len)
				res[i++] = src[(j) - len--];
			break;
		}
		j++;
	}
	if (res)
		res[i] = '\0';
	return (res);
}