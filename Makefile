# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atitus <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/26 15:40:20 by atitus            #+#    #+#              #
#    Updated: 2019/08/26 15:57:21 by atitus           ###   ########.fr        #
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
	  main.c \
	  operations1.c \
	  operations2.c \
	  operations3.c \
	  print_list.c \
	  push_swap.c \
	  stats.c \


SRCO = add_node.o \
	  apply_instruction.o \
	  checker.o \
	  delete.o \
	  deleteList.o \
	  funcs.o \
	  funcs2.o \
	  main.o \
	  operations1.o\
	  operations2.o \
	  operations3.o \
	  print_list.o \
	  push_swap.o \
	  stats.o \
CFLAGS = -Wall -Werror -Wextra 

HEADER = ./includes/

all: $(NAME)

$(NAME):
	gcc -c $(CFLAGS) $(SRC)
	ar rc $(NAME) $(SRCO)
	ranlib $(NAME)
	gcc checker -Wall -Werror -Wextra -o checker
clean:
	/bin/rm -f $(SRCO)

fclean: clean
	/bin/rm -f $(NAME)

re : fclean all
