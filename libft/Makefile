#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/04/14 08:52:45 by niccheva          #+#    #+#              #
#    Updated: 2014/05/08 18:36:12 by niccheva         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME	=	libft.a

FLAGS	=	-Wall -Wextra -Werror -ansi -pedantic -std=c89

CC		=	gcc $(FLAGS)

DINC	=	includes/
DSRC	=	srcs/
DOBJ	=	objs/

SRC		=	ft_abs.c					\
			ft_bzero.c					\
			ft_ciradd_tail.c			\
			ft_cirnew.c					\
			ft_close.c					\
			ft_count_tab.c				\
			ft_destroy_tab.c			\
			ft_fatal_error.c			\
			ft_get_next_line.c			\
			ft_isalnum.c				\
			ft_isalpha.c				\
			ft_isascii.c				\
			ft_isdigit.c				\
			ft_isprint.c				\
			ft_isspace.c				\
			ft_issigned.c				\
			ft_itoa.c					\
			ft_memalloc.c				\
			ft_memccpy.c				\
			ft_memchr.c					\
			ft_memcmp.c					\
			ft_memcpy.c					\
			ft_memdel.c					\
			ft_memmove.c				\
			ft_memset.c					\
			ft_open.c					\
			ft_putchar.c				\
			ft_putchar_fd.c				\
			ft_putendl.c				\
			ft_putendl_fd.c				\
			ft_putnbr.c					\
			ft_putnbr_fd.c				\
			ft_putstr.c					\
			ft_putstr_fd.c				\
			ft_puttab.c					\
			ft_rejoin.c					\
			ft_strcat.c					\
			ft_strchr.c					\
			ft_strcmp.c					\
			ft_strclr.c					\
			ft_strcpy.c					\
			ft_strdel.c					\
			ft_strdup.c					\
			ft_strequ.c					\
			ft_striter.c				\
			ft_striteri.c				\
			ft_strjoin.c				\
			ft_strlcat.c				\
			ft_strlen.c					\
			ft_strmap.c					\
			ft_strmapi.c				\
			ft_strncat.c				\
			ft_strncmp.c				\
			ft_strncpy.c				\
			ft_strnequ.c				\
			ft_strnew.c					\
			ft_strnstr.c				\
			ft_strrchr.c				\
			ft_strsplit.c				\
			ft_strstr.c					\
			ft_strsub.c					\
			ft_strtrim.c				\
			ft_tolower.c				\
			ft_toupper.c

OBJ		=	$(patsubst %.c, $(DOBJ)%.o, $(SRC))

DSRC	=	srcs/

DOBJ	=	objs/

DINC	=	includes/

RMF		=	/bin/rm -f

RMD		=	/bin/rm -Rf

MKD		=	/bin/mkdir -p

all: $(NAME)

$(DOBJ)%.o: $(DSRC)%.c
	@$(MKD) $(DOBJ)
	@echo "Compilation de l'objet:\033[0;32m"
	$(CC) -o $@ -c $< -I $(DINC)
	@echo "\033[0;m\c"

$(NAME): $(OBJ)
	@echo "Creation de la libft:\033[0;32m"
	ar rcs $(NAME) $(OBJ)
	@echo "\033[0;m\c"

clean:
	@echo "Suppression des objets de la libft:\033[0;31m"
	$(RMF) $(OBJ)
	@echo "\033[0;m\c"
	@$(RMD) $(DOBJ)

fclean: clean
	@echo "Suppression de la libft\033[0;31m"
	$(RMF) $(NAME)
	@echo "\033[0;m\c"

re: fclean all

.PHONY: all libft libclean clean fclean re
