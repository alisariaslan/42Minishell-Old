/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msariasl <msariasl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 13:55:41 by msariasl          #+#    #+#             */
/*   Updated: 2023/03/28 11:19:41 by msariasl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_putchar(char c);
int		ft_printpercent(void);
char	*ft_itoa(int n);
int		ft_printstr(char *s);
int		ft_printnbr(int n);
int		ft_putnbr(int n);
int		ft_print_unsigned(unsigned int n);
int		ft_putchar(char c);
int		ft_print_hex(unsigned int n, const char format);
int		ft_print_ptr(unsigned long long n);
int		ft_printf(const char *str, ...);
void	ft_putstr(char *s);
void	ft_put_hex(unsigned int n, const char format);

#endif
