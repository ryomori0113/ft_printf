# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ryomori <ryomori@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/04 10:25:56 by ryomori           #+#    #+#              #
#    Updated: 2024/05/04 13:24:03 by ryomori          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# NAME		= libft.a

# # Name of srcs
# SRCS		= \
# 			ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
# 			ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c \
# 			ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c \
# 			ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c \
# 			ft_strrchr.c ft_tolower.c ft_toupper.c \
# 			\
# 			ft_itoa.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
# 			ft_putstr_fd.c ft_split.c ft_striteri.c ft_strjoin.c ft_strmapi.c \
# 			ft_strtrim.c ft_substr.c
# BSRCS		= \
# 			ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c \
# 			ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c \

# OBJS		= ${SRCS:.c=.o}
# BOBJS		= ${BSRCS:.c=.o}

# # Compiler setting
# CC			= cc
# CFLAGS		= -Wall -Wextra -Werror

# # Archive and remove command
# AR			= ar rcs
# RM			= rm -f

# ifeq ($(MAKECMDGOALS), bonus)
# 	OBJS += $(BOBJS)
# endif

# # Default target
# all:		${NAME}
# bonus:		${NAME}

# ${NAME}:	${OBJS}
# 			${AR} ${NAME} ${OBJS}

# %.o: %.c
# 		$(CC) $(CFLAGS) -c $< -o $@

# # Rule for cleaning object files
# clean:
# 			${RM} ${OBJS} ${BOBJS}

# # Rule for full clean
# fclean:		clean
# 			${RM} ${NAME}

# # Rule for re-build
# re:			fclean all

# # Phony targets
# .PHONY:		all clean fclean re bonus

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