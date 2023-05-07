/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msariasl <msariasl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 13:32:41 by ali               #+#    #+#             */
/*   Updated: 2022/10/24 21:52:52 by msariasl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long int	long_int;
	int			sign;

	sign = 1;
	long_int = 0;
	while ((*str >= 9 && *str <= 13) || (*str == 32))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
	str++;
	}
	while (*str != 0 && *str >= '0' && *str <= '9')
	{
		long_int = long_int * 10 + (*str - '0') * sign;
		if (long_int > 21474483647)
			return (-1);
		if (long_int < -2147483648)
			return (0);
		str++;
	}
	return (long_int);
}
