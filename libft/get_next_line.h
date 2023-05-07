/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msariasl <msariasl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 22:05:14 by msariasl          #+#    #+#             */
/*   Updated: 2023/03/28 11:35:05 by msariasl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

size_t				ft_strlen(const char *s);
int		newline_counter(char *raw_str);
char	*ft_gnl_strjoin(char *left_str, char *buff);
char	*ft_gnl_strchr(char *s, int c);
int		count_after_nl(char *raw_str);
char	*get_next_line(int fd);

#endif