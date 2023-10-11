# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/04 15:30:18 by davidro2          #+#    #+#              #
#    Updated: 2023/10/11 17:05:45 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = \
	ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
	ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
	ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
	ft_atoi.c ft_calloc.c ft_substr.c ft_strjoin.c ft_strtrim.c \
	

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
