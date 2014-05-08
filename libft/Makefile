# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dherz <dherz@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/03/13 23:31:04 by anramos           #+#    #+#              #
#    Updated: 2014/04/19 05:45:25 by dherz            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a
FLAGS	=	-Wall -Werror -Wextra
GCC		=	gcc $(FLAGS)
SRCS	=	ft_putchar.c \
			ft_putstr.c \
			ft_putnbr.c \
			ft_strlen.c \
			ft_strdup.c \
			ft_strcat.c \
			ft_strncat.c \
			ft_memset.c \
			ft_bzero.c \
			ft_memcpy.c \
			ft_memccpy.c \
			ft_memmove.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memalloc.c \
			ft_strcpy.c \
			ft_strncpy.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strstr.c \
			ft_strnstr.c \
			ft_strcmp.c \
			ft_strncmp.c \
			ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_atoi.c \
			ft_strjoin.c \
			ft_strsplit.c \
			ft_strsub.c \
			ft_strnew.c 

OBJS	=	$(SRCS:.c=.o)

all: $(NAME)

$(NAME):
	$(GCC) $(SRCS) -c
	ar -q $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	rm -rf $(OBJS)
	
fclean:	clean
	@rm -rf $(NAME)

re:	clean fclean all

.PHONY: all clean fclean re
