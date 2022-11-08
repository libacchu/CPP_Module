# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/23 23:26:53 by libacchu          #+#    #+#              #
#    Updated: 2022/11/08 09:39:32 by libacchu         ###   ########.fr        #
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

%.o: %.cpp
	$(CC) $(CFLAGS) -c $(SRC)
	
clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
