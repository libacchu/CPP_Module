# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/15 09:21:19 by libacchu          #+#    #+#              #
#    Updated: 2023/01/15 09:22:08 by libacchu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		mutantStack

CC =		c++
CFLAGS =	-Wall -Werror -Wextra  -std=c++98 -g

RM = 		rm -rf

SRC = 		main.cpp

OBJ = 		$(SRC:.cpp=.o)

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
