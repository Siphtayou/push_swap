# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agilles <agilles@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/15 16:34:53 by agilles           #+#    #+#              #
#    Updated: 2024/01/17 15:16:36 by agilles          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

EXEC = push_swap.out
NAME = printf_libft.a
LIBFT = printf_libft/libftprintf.a
CC = cc
CFLAGS = -Wall -Werror -Wextra
SRC = 	src_lst/ft_lstadd_back.c\
		src_lst/ft_lstadd_front.c\
		src_lst/ft_lstlast.c\
		src_lst/ft_lstnew.c\
		src_lst/ft_lstfree.c\
		ft_ope.c\
		error.c\


MAIN = main.c\

OBJ = $(SRC:.c=.o)

all : $(EXEC)
	mv a.out $(EXEC)

clean :
	rm -f $(OBJ)
	$(MAKE) clean -C $$(dirname $(LIBFT))

fclean : clean
	rm -f $(NAME)
	rm -f $(EXEC)
	$(MAKE) fclean -C $$(dirname $(LIBFT))

re : fclean all

$(LIBFT) :
	$(MAKE) -C $$(dirname $@)

%.o : %.c
	$(CC) $(CFLAGS) -o $@ -c $<

$(NAME) : $(OBJ) $(LIBFT)
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJ)

$(EXEC) : $(NAME)
	$(CC) $(CFLAGS) $(MAIN) $(NAME)

