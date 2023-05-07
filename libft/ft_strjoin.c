/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msariasl <msariasl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:27:23 by ali               #+#    #+#             */
/*   Updated: 2022/10/24 19:59:51 by msariasl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	size_t	len;

	len = ft_strlen(s1) + ft_strlen(s2);
	new = (char *) malloc(sizeof(char) * len + 1);
	if (!new)
		return (NULL);
	while (*s1 != 0)
	{
		*new = *s1;
		new++;
		s1++;
	}
	while (*s2 != 0)
	{
		*new = *s2;
		new++;
		s2++;
	}
	*new = 0;
	return (new - len);
}
