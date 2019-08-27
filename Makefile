# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atitus <atitus@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/26 15:40:20 by atitus            #+#    #+#              #
#    Updated: 2019/08/27 12:29:41 by atitus           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= push_swap.a

SRC = add_node.c \
	  apply_instruction.c \
	  checker.c \
	  delete.c \
	  deleteList.c \
	  funcs.c \
	  funcs2.c \
	  operations1.c \
	  operations2.c \
	  operations3.c \
	  print_list.c \
	  push_swap.c \
	  stats.c\
	  ft_push_swap.c


SRCO = add_node.o \
	  apply_instruction.o \
	  checker.o \
	  delete.o \
	  deleteList.o \
	  funcs.o \
	  funcs2.o \
	  operations1.o\
	  operations2.o \
	  operations3.o \
	  print_list.o \
	  push_swap.o \
	  stats.o\
	  ft_push_swap.o
CFLAGS = -Wall -Werror -Wextra 

all: $(NAME)

$(NAME):
	@make -C libft/
	@gcc -c -g $(CFLAGS) $(SRC)
	@ar rc $(NAME) $(SRCO)
	@ranlib $(NAME)
	@gcc checker.c push_swap.a libft/libft.a -Wall -Werror -Wextra -o checker
	@gcc ft_push_swap.c push_swap.a libft/libft.a -Wall -Werror -Wextra -o push_swap
clean:
	@/bin/rm -f $(SRCO)

fclean: clean
	@/bin/rm -f $(NAME)
	@rm checker push_swap

re : fclean all
