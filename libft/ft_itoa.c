/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msariasl <msariasl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 16:38:21 by msariasl          #+#    #+#             */
/*   Updated: 2023/05/07 16:38:23 by msariasl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_str_len(int n)
{
	size_t	i;

	i = 1;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char			*str;
	size_t			str_len;
	unsigned int	n_cpy;

	str_len = get_str_len(n);
	n_cpy = n;
	if (n < 0)
	{
		n_cpy = -n;
		str_len++;
	}
	str = ft_strnew(str_len);
	if (!str)
		return (NULL);
	str[--str_len] = n_cpy % 10 + '0';
	while (n_cpy)
	{
		n_cpy /= 10;
		str[--str_len] = n_cpy % 10 + '0';
	}
	if (n < 0)
		*(str + 0) = '-';
	return (str);
}
