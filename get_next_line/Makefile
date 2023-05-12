# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clem <clem@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/11 21:19:44 by cldias            #+#    #+#              #
#    Updated: 2023/05/11 21:21:38 by clem             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = gnl.a

SRCS = get_next_line.c get_next_line_utils.c

OBJS = $(SRCS:.c=.o)

CC = gcc
RM = rm -rf
CFLAGS = -Wall -Wextra -Werror

.c.o:	$(SRCS)
	$(CC) $(CFLAGS) -c -o $@ $<
	
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

all:	$(NAME)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re