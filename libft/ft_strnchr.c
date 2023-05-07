/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msariasl <msariasl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 16:42:34 by msariasl          #+#    #+#             */
/*   Updated: 2023/05/07 16:42:36 by msariasl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnchr(char *s, char c, int offset)
{
	int		i;

	i = -1;
	while (s[++i])
		if (s[i] == c)
			return (s + i + offset);
	return (NULL);
}
