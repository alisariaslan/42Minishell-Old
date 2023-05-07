/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countwordsall.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msariasl <msariasl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 16:37:28 by msariasl          #+#    #+#             */
/*   Updated: 2023/05/07 16:37:30 by msariasl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countwordsall(char const *str)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\r'
			|| str[i] == '\f')
			i++;
		if (!(str[i] == ' ' || str[i] == '\t' || str[i] == '\r'
				|| str[i] == '\f') && str[i] != '\0')
			count++;
		while (!(str[i] == ' ' || str[i] == '\t' || str[i] == '\r'
				|| str[i] == '\f') && str[i] != '\0')
			i++;
	}
	return (count);
}
