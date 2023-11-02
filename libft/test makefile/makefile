# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lburkins <lburkins@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/31 16:46:37 by lburkins          #+#    #+#              #
#    Updated: 2023/10/31 17:17:52 by lburkins         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFILES = ft_memset.c ft_bzero.c
  
OFILES = $(CFILES:.c=.o)
	
CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

all: $(NAME) 

$(NAME): $(OFILES)
	ar rcs $(NAME) $(OFILES) 

clean:
	rm -f $(OFILES)

fclean:  
	clean rm -f $(NAME)

re: fclean $(NAME)

.PHONY:  all clean fclean re
