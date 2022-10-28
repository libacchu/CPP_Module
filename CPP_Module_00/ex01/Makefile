# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/24 00:21:18 by libacchu          #+#    #+#              #
#    Updated: 2022/10/28 10:02:34 by libacchu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		phonebook

CC =		c++
CFLAGS =	-Wall -Werror -Wextra -std=c++98
RM =		rm -rf

SRC = 		phonebook.cpp \
			contact.cpp \
			main.cpp

OBJ =		$(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
