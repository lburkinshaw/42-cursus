# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lburkins <lburkins@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/21 14:26:43 by lburkins          #+#    #+#              #
#    Updated: 2023/11/23 10:06:47 by lburkins         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFILES	=	ft_atoi.c \
			ft_bzero.c \
			ft_calloc.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_itoa.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_putchar_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_putstr_fd.c \
			ft_strchr.c \
			ft_strdup.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_split.c \
			ft_strtrim.c \
			ft_strmapi.c \
			ft_striteri.c

B_CFILES	=	ft_lstnew_bonus.c \
				ft_lstadd_front_bonus.c \
				ft_lstsize_bonus.c \
				ft_lstlast_bonus.c \
				ft_lstadd_back_bonus.c \
				ft_lstdelone_bonus.c \
				ft_lstclear_bonus.c

OFILES = $(CFILES:.c=.o)

B_OFILES = $(B_CFILES:.c=.o)

CFLAGS = -Wall -Wextra -Werror

CC = cc

all: $(NAME)

$(NAME): $(OFILES)
	ar rcs $(NAME) $(OFILES) 

bonus: .bonus

.bonus: $(OFILES) $(B_OFILES)
	ar rcs $(NAME) $(B_OFILES)
	touch .bonus

clean:
	rm -f $(OFILES) $(B_OFILES) .bonus

fclean: clean
	rm -f $(NAME) 

re: fclean all

.PHONY: all clean fclean re bonus
