# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ryomori <ryomori@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/04 10:25:56 by ryomori           #+#    #+#              #
#    Updated: 2024/05/07 10:04:17 by ryomori          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a

SRCS		= \
			ft_base.c ft_case_char_int.c ft_case_hexa.c ft_case_pointer_string.c\
			ft_case_unint.c ft_printf.c ft_putstr_lower.c
			\
OBJS		= $(SRCS:.c=.o)

CC			= cc
CFLAGS		= -Wall -Wextra -Werror
LIBFT		= ./libft/libft.a

AR			= ar rcs
RM			= rm -f

all:		${NAME}

${NAME}:	${OBJS}
			${MAKE} -C ./libft
			cp libft/libft.a ${NAME}
			${AR} ${NAME} ${OBJS}

%.o: %.c
		$(CC) $(CFLAGS) -c $< -o $@

clean:
			${MAKE} clean -C ./libft
			${RM} ${OBJS}
fclean:		clean
			${MAKE} fclean -C ./libft
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re