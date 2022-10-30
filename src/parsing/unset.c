/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unset.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaghazar <vaghazar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:09:20 by vaghazar          #+#    #+#             */
/*   Updated: 2022/10/28 11:42:24 by vaghazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

static int	is_valid_args(char *args)
{
	int		i;
	char	*error;
	char	*identifier;

	i = 0;
	if (!args || !args[i])
	{
		error = ft_strjoin_2("minishell: unset: ", ft_strjoin_1(ft_strjoin_2("`", ft_strjoin(args, "'")), ": not a valid identifier"));
		ft_putendl_fd(error, 2);
		free(error);
		return (1);
	}
	while (args[i])
	{
		if (((!ft_isalnum(args[i]) && args[i] != '_') || (ft_isdigit(args[i]) && i == 0)))
		{
			error = ft_strjoin_2("minishell: unset: ", ft_strjoin_1(ft_strjoin_2("`", ft_strjoin(args, "'")), ": not a valid identifier"));
			ft_putendl_fd(error, 2);
			free(error);
			return (1);
		}
			i++;
	}
	return (0);
}

int	unset(t_data *data, char **args)
{
	int			i;
	int			j;
	int			flag;
	char		**tmp;

	if (args == NULL)
		return (1);
	i = 1;
	flag = 0;
	while (args[i])
	{
		if (is_valid_args(args[i]))
			return (1);
		del_env_node(data->env, args[i]);
		del_env_node(data->env_exp, args[i]);
		i++;
	}
	data->envp =  env_cpy(data, data->env);
	return (0);
}