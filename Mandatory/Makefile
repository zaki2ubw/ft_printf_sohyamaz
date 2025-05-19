# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sohyamaz <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/22 16:52:26 by sohyamaz          #+#    #+#              #
#    Updated: 2024/12/22 17:24:51 by sohyamaz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a
SRCS	= ft_printf.c format_char.c format_number.c
CC	= cc
CFLAGS	= -Wall -Wextra -Werror
LIBS	= ar -rcs
OBJS	= $(SRCS:%.c=%.o)

all	: $(NAME)

clean	: 
	rm -rf $(OBJS)

fclean	: clean
	rm -rf $(NAME)

re	: fclean all

.PHONY	: all re clean fcrean

$(NAME)	: $(OBJS)
	$(LIBS) $(NAME) $^ -o $@

%.o	: %.c
	$(CC) $(CFLAGS) -c $< -o $@
