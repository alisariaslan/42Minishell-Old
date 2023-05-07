/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msariasl <msariasl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 18:07:54 by ali               #+#    #+#             */
/*   Updated: 2022/10/25 00:05:22 by msariasl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*space;
	size_t			i;

	space = (unsigned char *)malloc(nmemb * size);
	if (!space)
		return (0);
	i = 0;
	while (i < nmemb * size)
	{
		space[i] = 0;
		i++;
	}
	return ((void *)space);
}
