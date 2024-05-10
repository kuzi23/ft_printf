# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kuzi <kuzi@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/09 13:59:41 by mkwizera          #+#    #+#              #
#    Updated: 2024/05/07 07:15:49 by kuzi             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = gcc
CFLAGS = -Wall -Wextra -Werror
INCLUDE = -I../ #include the  path of the  current directory
SRC = $(wildcard *.c) $(wildcard csiupdxX/*.c) $(wildcard libftmimic/*.c) $(wildcard flags/*.c) # Add paths to other directories
OBJ = $(SRC:.c=.o)
NAME = ft_printf.a

.PHONY: all clean fclean re
all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o : %.c
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean 
	rm -f $(NAME)

re: clean all
