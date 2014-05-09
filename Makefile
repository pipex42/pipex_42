#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/04/14 08:52:45 by niccheva          #+#    #+#              #
#    Updated: 2014/05/08 17:45:40 by niccheva         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME	=	pipex

FLAGS	=	-Wall -Wextra -Werror -ansi -pedantic -std=c89

CC		=	gcc $(FLAGS)

LIBFT	=	-L$(DLIB) -lft

DLIB	=	libft/
DINC	=	-I./includes/ -I./libft/includes/
DSRC	=	srcs/
DOBJ	=	objs/

SRC		=	ft_getenv.c				\
			ft_parsecmd.c			\
			ft_checkcmd.c			\
			main.c

OBJ		=	$(patsubst %.c, $(DOBJ)%.o, $(SRC))

RMF		=	/bin/rm -f

RMD		=	/bin/rm -Rf

MKD		=	/bin/mkdir -p

all: libft $(NAME)

$(DOBJ)%.o: $(DSRC)%.c
	@$(MKD) $(DOBJ)
	@echo "Compilation de l'objet:\033[0;32m"
	$(CC) -o $@ -c $< $(DINC)
	@echo "\033[0;m\c"

$(NAME): $(DLIB)libft.a $(OBJ)
	@echo "Creation de l'executable:\033[0;32m"
	$(CC) -o $(NAME) $(OBJ) $(LIBFT)
	@echo "\033[0;m\c"

clean:
	@echo "Suppression des objets du projet:\033[0;31m"
	$(RMF) $(OBJ)
	@echo "\033[0;m\c"
	@$(RMD) $(DOBJ)

fclean: clean
	@echo "Suppression de l'executable\033[0;31m"
	$(RMF) $(NAME)
	@echo "\033[0;m\c"

libft:
	@echo "Compilation des sources de la lib:"
	@make -C $(DLIB)

libclean:
	@echo "Suppression de la librairie libft.a, et de ses objets:"
	@make -C $(DLIB) fclean

relib:
	@echo "Recompilation de la libft"
	@make -C $(DLIB) re

re: fclean all

.PHONY: all libft libclean clean fclean re

