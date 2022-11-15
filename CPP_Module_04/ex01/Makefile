# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/14 11:00:50 by libacchu          #+#    #+#              #
#    Updated: 2022/11/15 10:07:22 by libacchu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		animal

CC =		c++
CFLAGS =	-Wall -Werror -Wextra  -std=c++98

RM = 		rm -rf

SRC = 		main.cpp \
			Animal.cpp \
			Cat.cpp \
			Dog.cpp \
			WrongAnimal.cpp \
			WrongCat.cpp

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
