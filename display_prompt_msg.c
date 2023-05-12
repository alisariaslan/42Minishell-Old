/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_prompt_msg.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msariasl <msariasl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 16:22:30 by msariasl          #+#    #+#             */
/*   Updated: 2023/05/12 11:50:36 by msariasl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

//shell kill

void	exit_shell(void)
{
	ft_freestrarr(g_envv);
	write(1, "\n", 1);
	exit(0);
}

//path string i parse eder ve devam eder

char	*parse_home_path(char *path, int reverse_parse)
{
	char	*home_path;
	char	*new;
	char	*state;

	if (!path)
		return (NULL);
	home_path = get_env_var("HOME");
	state = (char *)malloc(sizeof(char) * 1);
	if (reverse_parse)
		state = "~";
	else
		state = home_path;
	if (!ft_strstartswith(path, state))
		return (ft_strdup(path));
	if (reverse_parse)
		new = ft_pathjoin(home_path, path + 1);
	else
	{
		if (*(path + ft_strlen(home_path)) == '\0')
			new = ft_strdup("~");
		else
			new = ft_pathjoin("~", path + ft_strlen(home_path));
	}
	return (new);
}
