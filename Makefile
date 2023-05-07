# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msariasl <msariasl@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/06 16:24:52 by msariasl          #+#    #+#              #
#    Updated: 2023/05/07 14:32:34 by msariasl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = minishell
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): *.c *.h libft/*.c libft/*.h
	make -C libft
	gcc -c *.c
	gcc *.o libft/libft.a -lreadline -o $(NAME)
	make clean

clean:
	rm -rf *.o
	rm -rf build/*.o
	rm -rf libft/*.o

fclean: clean
	rm -rf minishell
	rm -rf libft/*.a

re: fclean all

.PHONY: all fclean clean re

n:
	norminette -R CheckForbiddenSourceHeader
