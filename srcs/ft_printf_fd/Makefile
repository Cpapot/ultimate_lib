# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cpapot <cpapot@student.42lyon.fr >         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/08 14:44:54 by cpapot            #+#    #+#              #
#    Updated: 2023/01/18 20:35:57 by cpapot           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= ../../printffd.a

SRC_ROOT =	ft_printf_fd.c

SRCS	=	ft_putunsint_len.c ft_putstr_len.c \
			ft_putpercent_len.c ft_putnull_len.c ft_putint_len.c \
			ft_puthexavoid_len.c ft_puthexamin_len.c ft_puthexamaj_len.c \
			ft_putchar_len.c ft_findformat.c

SRCS_LIBFT	= ft_bzero.c ft_itoa.c ft_strlen.c ft_substr.c

SRC_DIR = $(addprefix printf_utils/, $(SRCS))

LIBFT_DIR = $(addprefix libft_utils/, $(SRCS_LIBFT))

HEADERS = ft_printf_fd.h

CFLAGS = -Wall -Wextra -Werror

OBJS	= $(SRC_ROOT:.c=.o) ${SRC_DIR:.c=.o} ${LIBFT_DIR:.c=.o}

PRINT_COMPILE = @echo "\033[1;32m⏳ compiling ft_printf_fd\033[1;0m"

%.o:	%.c ${HEADERS} Makefile
	$(PRINT_COMPILE)
	@$(CC) -I ${CFLAGS} -c $< -o $@
	@$(eval PRINT_COMPILE = @:)

${NAME}:	${OBJS}
	@ar rcs ${NAME} ${OBJS}
	@echo "\033[1;32m✅ ft_printf_fd OK\033[1;0m"

all: ${NAME}

clean:
	@${RM} ${OBJS}

fclean:		clean
	@${RM} ${NAME}

re:	fclean all

.PHONY : re all clean fclean
