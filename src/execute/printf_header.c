/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_header.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 14:18:59 by arakhurs          #+#    #+#             */
/*   Updated: 2022/10/28 14:19:00 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"
 
void	printf_header(void)
{
printf("%s%s", RED, "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
printf("@                                                                                     @\n");
printf("@                                                                                     @\n");
printf("%s%s%s%s%s", "@                       ", BLUE, "___________________________________                           ", RED, "@\n");
printf("%s%s%s%s%s", "@                      ", BLUE, "|                                   |                          ", RED, "@\n");
printf("%s%s%s%s%s%s%s%s%s", "@                      ", BLUE, "|", YELLOW, "        BORN    TO    CODE         ", BLUE, "|", RED, "                          @\n");
printf("%s%s%s%s%s", "@                      ", BLUE, "|___________________________________|                          ", RED, "@\n");
printf("%s%s%s%s", RED, "@                                                                                     ", RED, "@\n");
printf("%s%s%s%s", RED, "@                                                                                     ", RED, "@\n");
printf("%s%s%s%s", RED, "@                                                                                     ", RED, "@\n");
printf("%s%s%s%s", RED, "@                       & J^^^^^^^^:~5    7^^^^^^^:~?^^^^^^^^^^J&                     ", RED, "@\n");
printf("%s%s%s%s", RED, "@                     & Y^#########!G     ^####################7&                     ", RED, "@\n");
printf("%s%s%s%s", RED, "@                   &&P~#########~P&&     ^#####~P&&5##########7&                     ", RED, "@\n");
printf("%s%s%s%s", RED, "@                  &G!#########^5 &       ^###^5 & &5##########7&                     ", RED, "@\n");
printf("%s%s%s%s", RED, "@                &B7#########:Y &         ^#:Y &   &5##########7&                     ", RED, "@\n");
printf("%s%s%s%s", RED, "@              & J.########.J &           !?B&     &5##########7&                     ", RED, "@\n");
printf("%s%s%s%s", RED, "@            & Y:########.?B&              &     & Y:#########7B                      ", RED, "@\n");
printf("%s%s%s%s", RED, "@          &&5^#########!G&&                   &&P^#########~P&                       ", RED, "@\n");
printf("%s%s%s%s", RED, "@        &&P~#########~P&&                    &G!#########^5 &                        ", RED, "@\n");
printf("%s%s%s%s", RED, "@       &G7#########^5 &                    &B7.########:Y &                          ", RED, "@\n");
printf("%s%s%s%s", RED, "@     &B?.########:Y&&&&&&&&&&&&&&&&&&    &B?.########.JB&                            ", RED, "@\n");
printf("%s%s%s%s", RED, "@     Y:#########^YPP5555555555555555P#   Y:#########7B&    & B                       ", RED, "@\n");
printf("%s%s%s%s", RED, "@     ^##############################^    ^#########: &    & P^7&                     ", RED, "@\n");
printf("%s%s%s%s", RED, "@     ~##############################^    ^#########:     &G!##7&                     ", RED, "@\n");
printf("%s%s%s%s", RED, "@     ~##############################^    ^#########:   &G7####7&                     ", RED, "@\n");
printf("%s%s%s%s", RED, "@     ^##############################^    ^#########: &B?.#####7&                     ", RED, "@\n");
printf("%s%s%s%s", RED, "@     Y????????????????????:#########^    ^#########.BJ.#######7&                     ", RED, "@\n");
printf("%s%s%s%s", RED, "@                          ^#########^    ^###################7&                      ", RED, "@\n");
printf("%s%s%s%s", RED, "@                          ^#########^    J777777777?Y777777777                       ", RED, "@\n");
printf("%s%s%s%s", RED, "@                          ^#########^                                                ", RED, "@\n");
printf("%s%s%s%s%s", "@     ", BLUE, " _____________", RED, "       ^#########^                                                @\n");
printf("%s%s%s%s%s%s%s", "@     ", BLUE, "|             ", BLUE, "|      ^#########:      ___________________                       ", RED, "@\n");
printf("%s%s%s%s%s%s%s%s%s", "@     ", BLUE, "|", YELLOW, " By vaghazar ", BLUE, "|      P555555555P     |                   |                      ", RED, "@\n");
printf("%s%s%s%s%s%s%s%s%s%s%s%s%s", "@     ", BLUE, "|", YELLOW, " By arakhurs ", BLUE, "|                      |", YELLOW, "  YEREVAN ARMENIA  ", BLUE, "|                      ", RED, "@\n");
printf("%s%s%s%s%s%s%s", "@     ", BLUE, "|_____________", BLUE, "|                      |___________________|                      ", RED, "@\n");
printf("%s%s", RED, "@                                                                                     @\n");
printf("@                                                                                     @\n");
printf("@                                                                                     @\n");
printf("%s%s", "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n", WHITE);

}