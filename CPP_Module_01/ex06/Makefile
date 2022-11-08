# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/03 20:21:51 by libacchu          #+#    #+#              #
#    Updated: 2022/11/07 16:23:22 by libacchu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		harlFilter

CC = 		c++
CFLAGS =	-Wall -Wextra -Werror -std=c++98 -Wimplicit-fallthrough=0

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
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
