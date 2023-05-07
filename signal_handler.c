/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signal_handler.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msariasl <msariasl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/11 00:50:10 by jrameau           #+#    #+#             */
/*   Updated: 2023/05/06 17:32:49 by msariasl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

/*
** Handles interruption signals on a running process
**
** @param		signo		The signal number
** @return		N/A
*/

void	proc_signal_handler(int signo)
{
	if (signo == SIGINT)
	{
		ft_putstr("\n");
		signal(SIGINT, proc_signal_handler);
	}
}

/*
** Handles interruption signals on the program
**
** @param		signo		The signal number
** @return		N/A
*/

void	signal_handler(int signo)
{
	printf("\nsig:%d\n",signo);
	if (signo == SIGINT)
	{
		ft_putstr("\n");
		ft_putstr("\033[5;91mMini\033[0m\033[5;1;92mShell🔥💯 : \033[0m");
		signal(SIGINT, signal_handler);
	}
}
