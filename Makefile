# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkwizera <mkwizera@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/09 13:59:41 by mkwizera          #+#    #+#              #
#    Updated: 2024/05/11 14:02:43 by mkwizera         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = gcc
CFLAGS = -Wall -Wextra -Werror
INCLUDE = -I../ -I./csiupdxX -I./libftmimic -I./flags#include the  path of the  current directory
SRC = $(wildcard *.c) # Add paths to other directories
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
