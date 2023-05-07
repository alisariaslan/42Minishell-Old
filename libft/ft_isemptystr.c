/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isemptystr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msariasl <msariasl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 16:38:03 by msariasl          #+#    #+#             */
/*   Updated: 2023/05/07 16:38:05 by msariasl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isemptystr(char *str, int consider_space)
{
	int	i;
	int	min;
	int	max;

	i = -1;
	min = 32 + consider_space;
	max = 126;
	while (str[++i])
	{
		if (str[i] >= min && str[i] <= max)
			return (0);
	}
	return (1);
}
