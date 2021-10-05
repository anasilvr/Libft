# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anarodri <anarodri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/20 12:27:09 by anarodri          #+#    #+#              #
#    Updated: 2021/10/05 13:32:41 by anarodri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#	target: [dependencies]
#		<shell command to execute>
#		<shell command to execute>
#		...

NAME	=	libft.a

HEADER	= 	libft.h

CC		=	gcc

CFLAGS	=	-Og -Wall -Wextra -Werror -I -c

SRC		=	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_toupper.c \
			ft_tolower.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
			ft_strchr.c ft_atoi.c ft_strdup.c ft_calloc.c ft_strrchr.c ft_strncmp.c ft_memchr.c \
			ft_memcmp.c ft_strnstr.c

OBJ	=	$(SRC:.c=.o)

$(NAME):	$(OBJ)
	ar -rcs $(NAME) $(OBJ)

all:	$(NAME)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all


.PHONY: all clean fclean re
