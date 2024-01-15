# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agilles <agilles@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/15 16:34:53 by agilles           #+#    #+#              #
#    Updated: 2024/01/15 17:16:05 by agilles          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

EXEC = push_swap.out
NAME = printf_libft.a
LIBFT = printf_libft/libftprintf.a
CC = cc
CFLAGS = -Wall -Werror -Wextra
SRC = ft_ope.c
MAIN = main.c\

OBJ = $(SRC:.c=.o)

all : $(EXEC)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

$(LIBFT) :
	$(MAKE) -C $$(dirname $@)

%.o : %.c
	$(CC) $(CFLAGS) -o $@ -c $<

$(NAME) : $(OBJ) $(LIB)
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJ)

$(EXEC) : $(NAME)
	$(CC) $(CFLAGS) $(MAIN) $(NAME)

