# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: keshav <keshav@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/29 23:55:30 by keshav            #+#    #+#              #
#    Updated: 2021/12/01 12:41:20 by keshav           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a
HEADER		= ft_printf.h
RM			= rm -f
MAKE		= make

SRC			= ft_printf.c ft_printf_support.c ft_printhex.c \
			  ft_printnbr.c ft_printptr.c ft_printunsigned.c 

OBJ			= ${SRC:.c=.o}

all:		$(NAME)

$(NAME):	$(OBJ)
			ar rcs $(NAME) $(OBJ)

clean:		
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
