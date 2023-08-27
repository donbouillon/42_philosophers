# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slistle <slistle@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/22 18:23:58 by slistle           #+#    #+#              #
#    Updated: 2023/08/22 18:24:07 by slistle          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := push_swap
CC := gcc
CFLAGS := -Wall -Werror -Wextra
SRC_FILES := main.c

OBJ_FILES = $(SRC_FILES:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ_FILES)
	$(CC) ${OBJ_FILES} -o ${NAME}
	
.c.o:
	${CC} ${CFLAGS} -g -c $< -o ${<:.c=.o}

clean:
	rm -rf $(OBJ_FILES) $(NAME)

fclean: clean
	rm -rf all

re: fclean all