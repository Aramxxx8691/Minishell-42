/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_elem.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaghazar <vaghazar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 18:41:52 by vaghazar          #+#    #+#             */
/*   Updated: 2022/10/31 10:16:02 by vaghazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

t_elem	*count_elem(char *str)
{
	int		i;
	t_elem	*res;

	i = 0;
	res = malloc(sizeof(t_elem));
	if (!res && !ft_perror("minishell: "))
		exit (1);
	res->heredoc = 1;
	res->out_append_files = 1;
	res->out_file = 1;
	res->in_file = 1;
	while (str[i])
	{
		if (str[i] == '<' && str[i + 1] == '<' && ++i && ++i)
			(res->heredoc)++;
		if (str[i] == '>' && str[i + 1] == '>' && ++i && ++i)
			(res->out_append_files)++;
		if (str[i] == '<' && ++i)
			(res->in_file)++;
		if (str[i] == '>' && ++i)
			(res->out_file)++;
		if (str[i] && !ft_strchr(HANDLE, str[i]))
			i++;
	}
	return (res);
}
