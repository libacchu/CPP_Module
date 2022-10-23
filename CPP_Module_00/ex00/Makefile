# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/23 23:26:53 by libacchu          #+#    #+#              #
#    Updated: 2022/10/24 00:18:00 by libacchu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		megaphone

CC =		c++
CFLAGS =	-Wall -Wextra -Werror -std=c++98

RM =		rm -rf

SRC =		megaphone.cpp

OBJ =		$(SRC:.cpp=.o)

all:		$(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	
clean:
	$(RM) *.o;

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
