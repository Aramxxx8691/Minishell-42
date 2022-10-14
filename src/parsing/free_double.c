/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_double.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaghazar <vaghazar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 10:42:52 by vaghazar          #+#    #+#             */
/*   Updated: 2022/10/14 10:43:03 by vaghazar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	free_double(char ***ptr)
{
	int	i;

	i = 0;
	while (*ptr && (*ptr)[i])
		free((*ptr)[i++]);
	if ((*ptr))
		free((*ptr));
	return (0);
}