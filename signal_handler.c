/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signal_handler.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msariasl <msariasl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 16:21:44 by msariasl          #+#    #+#             */
/*   Updated: 2023/05/12 11:40:41 by msariasl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

// Bölme/Kesme sinyallerini çalışan işlem bazlı kontrol eder.

void	proc_signal_handler(int signo)
{
	if (signo == SIGINT)
	{
		ft_putstr("\n");
		signal(SIGINT, proc_signal_handler);
	}
}

// Bölme/Kesme sinyallerini program bazlı kontrol eder.

void	signal_handler(int signo)
{
	printf("\nsig:%d\n", signo);
	if (signo == SIGINT)
	{
		ft_putstr("\n");
		ft_putstr("\033[5;91mAT\033[0m\033[5;1;92mShell : \033[0m");
		signal(SIGINT, signal_handler);
	}
}
