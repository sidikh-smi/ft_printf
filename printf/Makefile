# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/01 17:50:26 by skhaliff          #+#    #+#              #
#    Updated: 2021/12/02 17:02:03 by skhaliff         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRCS = *.c 

OBJS = $(SRCS:.c=.o)
CC		= gcc
RM		= rm -f

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(OBJS):
		$(CC) $(CFLAGS)  -c $(SRCS)

$(NAME): $(OBJS)
		ar rcs $(NAME) $(OBJS)

clean:
		$(RM) $(OBJS)

fclean:	clean
		$(RM) $(NAME)

re:		fclean all