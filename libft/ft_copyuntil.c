/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_copyuntil.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msariasl <msariasl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 16:37:20 by msariasl          #+#    #+#             */
/*   Updated: 2023/05/07 16:37:21 by msariasl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_copyuntil(char **dst, char *src, char c)
{
	int	i;
	int	count;
	int	pos;

	i = -1;
	count = 0;
	while (src[++i])
		if (src[i] == c)
			break ;
	pos = i;
	*dst = ft_strnew(i);
	if (!*dst)
		return (0);
	while (src[count] && count < i)
	{
		*dst = ft_strjoinch(*dst, src[count]);
		if (!*dst)
			return (0);
		count++;
	}
	return (pos);
}
