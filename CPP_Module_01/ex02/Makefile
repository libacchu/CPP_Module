# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/02 15:47:57 by libacchu          #+#    #+#              #
#    Updated: 2022/11/02 16:02:40 by libacchu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		HI_THIS_IS_BRAIN

CC = 		c++
CFLAGS =	-Wall -Wextra -Werror -std=c++98

RM =		rm -rf

SRC =		main.cpp

OBJ =		$(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	
clean:
	$(RM) *.o;

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
