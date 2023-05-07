# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msariasl <msariasl@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/04 21:32:18 by msariasl          #+#    #+#              #
#    Updated: 2023/03/28 11:27:19 by msariasl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = $(shell find . -type f -name "*.c" ! -name "main.c")
OBJ = $(SRC:.c=.o)
FLAGS = -Wall -Wextra -Werror

%.o: %.c
	gcc $(FLAGS) -c $< -o $@

$(NAME): $(OBJ) *.h
		ar -rc $(NAME) $(OBJ)

all: $(NAME)

clean:
	rm -rf *.o
	rm -rf *.out

fclean:
	make clean
	rm -rf $(NAME)

re:
	make fclean
	make

n:
	clear
	norminette $(SRC) -R CheckForbiddenSourceHeader

test:
	make
	gcc main.c -L. $(NAME)
	./a.out
	

.PHONY: all clean fclean re