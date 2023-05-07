/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msariasl <msariasl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 22:14:23 by ali               #+#    #+#             */
/*   Updated: 2022/10/27 14:04:38 by msariasl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *src, int c)
{
	char	*str;
	int		srclen;

	str = (char *)src;
	srclen = ft_strlen(str);
	while (srclen >= 0)
	{
		if (str[srclen] == (char)c)
			return (&str[srclen]);
		srclen = srclen - 1;
	}
	return (0);
}
