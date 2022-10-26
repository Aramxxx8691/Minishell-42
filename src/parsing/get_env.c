/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_env.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaghazar <vaghazar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 18:27:59 by vaghazar          #+#    #+#             */
/*   Updated: 2022/10/26 20:16:52 by vaghazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

char	**split_for_env(char *str, char c)
{
	char	**res;
	int		i;

	i = 0;
	res = malloc(sizeof(char *) * 3);
	fill_null((void *)&res, 3);
	while (str[i])
	{
		if (str[i] == c)
		{
			res[0] = ft_substr(str, 0, i);
			res[1] = ft_substr(str, i + 1, ft_strlen(str) - i);
			// printf("%i = d\n", ft_strlen(str) - i);
			// printf("%i = d\n", i);
			return (res);
		}
		i++;
	}
	res[0] = ft_strdup(str);
	return (res);
}

t_env	*get_env(t_list_env **env_list, char **envp, int is_export)
{
	t_env	*env;
	char	**tmp;
	int		i;

	i = 0;
	while (envp[i])
	{
		// tmp = ft_split(envp[i], '=');
		tmp = split_for_env(envp[i], '=');
		// printf("tmp[0]= %s\n", tmp[0]);
		// printf("tmp[1]= %s\n", tmp[1]);
		env = new_env(tmp[0], tmp[1], is_export);
		set_env(env_list, env);
		free_double((void *)&tmp);
		i++;
	}
	if (is_export == 0)
		set_env(env_list, env = new_env("?", "0", 2));
	return ((*env_list)->head);
}
