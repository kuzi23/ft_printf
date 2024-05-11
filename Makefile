# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkwizera <mkwizera@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/09 13:59:41 by mkwizera          #+#    #+#              #
#    Updated: 2024/05/11 16:09:17 by mkwizera         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = gcc
CFLAGS = -Wall -Wextra -Werror
INCLUDE = -I../ -I./csiupdxX -I./libftmimic -I./flags # include the  path of the  current directory
SRC = $(wildcard *.c) $(wildcard csiupdxX/*.c) $(wildcard libftmimic/*.c) $(wildcard flags/*.c)
OBJ = $(SRC:.c=.o)
NAME = ft_prntf.a

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
