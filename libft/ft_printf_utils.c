/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msariasl <msariasl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 13:55:47 by msariasl          #+#    #+#             */
/*   Updated: 2022/12/09 13:55:49 by msariasl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//PRINT ONE CHAR
int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

//PRINTS %
int	ft_printpercent(void)
{
	write(1, "%", 1);
	return (1);
}

//PRINTS STRING
void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}

//PRINTS STRING
int	ft_printstr(char *s)
{
	int	i;

	i = 0;
	if (!s)
	{
		ft_putstr("(null)");
		return (6);
	}
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}

//PRINTS NUMBER
int	ft_printnbr(int n)
{
	int		i;
	char	*s;

	i = 0;
	if (n == 0)
		return (write(1, "0", 1));
	s = ft_itoa(n);
	i = ft_printstr(s);
	free(s);
	return (i);
}
