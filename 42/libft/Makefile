# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: davidro2 <davidro2@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/04 15:30:18 by davidro2          #+#    #+#              #
#    Updated: 2023/10/06 18:34:50 by davidro2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = \
	ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c

OBJS = $(SRC:.c=.o)

NAME = libft.a

CC = cc

CFLAGS = -Wall -Werror -Wextra

RM = rm -f

all:	$(NAME)

$(NAME):	$(OBJS)
			ar rsc $(NAME) $(OBJS)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:	all clean fclean re
