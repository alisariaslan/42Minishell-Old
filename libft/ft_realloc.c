/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msariasl <msariasl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 16:40:31 by msariasl          #+#    #+#             */
/*   Updated: 2023/05/07 16:40:33 by msariasl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *ptr, size_t prev_size, size_t new_size)
{
	void	*new;
	size_t	n;

	if (!ptr)
		return (NULL);
	new = ft_memalloc(new_size);
	if (!new)
	{
		free(ptr);
		return (NULL);
	}
	if (prev_size < new_size)
		n = prev_size;
	else
		n = new_size;
	ft_memcpy(new, ptr, n);
	free(ptr);
	return (new);
}
