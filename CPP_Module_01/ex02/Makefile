# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/02 15:47:57 by libacchu          #+#    #+#              #
#    Updated: 2022/11/07 12:52:57 by libacchu         ###   ########.fr        #
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

%.o: %.cpp
	$(CC) $(CFLAGS) -c $(SRC)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
