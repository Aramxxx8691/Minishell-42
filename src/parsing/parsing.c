/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <arakhurs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 19:46:44 by vaghazar          #+#    #+#             */
/*   Updated: 2022/11/13 17:43:00 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	parsing(t_parse *parser)
{
	if (((check_quote(parser) == 1)
			|| (unexpected_tokens(parser) == START_RD_LN))
		&& !put_exit_s(parser->data, 258))
		return (START_RD_LN);
	split_quotes(parser);
	rep_vars(parser, 0);
	split_pipe(parser);
	pipe_join(parser);
	get_all_hd_modes(parser);
	find_exe(parser);
	if (parser->data->cmd_line->head == NULL)
		return (START_RD_LN);
	ft_clean_all_qutoes(parser->data->cmd_line->head);
	get_hd_mode_in_pipe(parser);
	print_info(parser);
	if ((run_heredoc(parser->data) == START_RD_LN))
		return (START_RD_LN);
	free_parse(parser);
	return (0);
}
