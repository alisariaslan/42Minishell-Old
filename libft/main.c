/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msariasl <msariasl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:17:40 by msariasl          #+#    #+#             */
/*   Updated: 2023/03/28 11:36:29 by msariasl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* THIS FILE WILL NOT COMPILE !*/

#include "libft.h"

int main(int argc, char **argv)
{
       ft_printf("\n");
       int fd = open("README.md",O_RDONLY);
       ft_printf("%s",get_next_line(fd));
       ft_printf("%s",get_next_line(fd));
       ft_printf("%s",get_next_line(fd));
       ft_printf("%s",get_next_line(fd));
}