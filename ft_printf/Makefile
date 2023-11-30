# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lburkins <lburkins@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/28 15:28:50 by lburkins          #+#    #+#              #
#    Updated: 2023/11/30 16:52:56 by lburkins         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CFILES	=	ft_printf.c \
			ft_printf_print_csp.c \
			ft_printf_print_diux.c

OFILES	=	$(CFILES:.c=.o)

CFLAGS = -Wall -Wextra -Werror

CC = cc

LIBFT_PATH = ./libft

LIBFT = $(LIBFT_PATH)/libft.a


all: $(NAME)

$(NAME): $(LIBFT) $(OFILES)
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OFILES)

$(LIBFT):
	make -C $(LIBFT_PATH) all

clean:
	make -C $(LIBFT_PATH) clean
	rm -f $(OFILES)

fclean: clean
	make -C $(LIBFT_PATH) fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re libft