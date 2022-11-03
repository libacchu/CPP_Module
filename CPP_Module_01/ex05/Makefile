# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/03 20:21:51 by libacchu          #+#    #+#              #
#    Updated: 2022/11/03 20:22:33 by libacchu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		harl_2.0

CC = 		c++
CFLAGS =	-Wall -Wextra -Werror -std=c++98

RM =		rm -rf

SRC =		main.cpp \
			Harl.cpp

OBJ =		$(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $(SRC)

clean:
	$(RM) *.o;

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
