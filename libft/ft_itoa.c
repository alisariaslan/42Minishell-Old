/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msariasl <msariasl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 13:56:08 by msariasl          #+#    #+#             */
/*   Updated: 2023/03/28 11:04:17 by msariasl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//COUNTS DIGIT
int	ft_len(int n, int t)
{
	int	i;

	i = 0;
	if (n == 0)
		i = 1;
	while (n != 0)
	{
		i++;
		n = n / 10;
	}
	if (t < 0)
		i++;
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		lenn;
	int		sign;
	long	n2;

	n2 = n;
	if (n2 < 0)
		sign = -1;
	else
		sign = 1;
	n2 = sign * n2;
	lenn = ft_len(n2, sign);
	str = (char *)malloc(sizeof(char) * lenn + 1);
	if (!str)
		return (0);
	str[lenn] = '\0';
	while (--lenn >= 0)
	{
		str[lenn] = '0' + (n2 % 10);
		n2 = n2 / 10;
	}
	if (sign == -1)
		str[0] = '-';
	return (str);
}
