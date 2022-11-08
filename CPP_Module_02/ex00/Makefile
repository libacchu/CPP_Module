# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/06 18:22:28 by libacchu          #+#    #+#              #
#    Updated: 2022/11/06 18:31:07 by libacchu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		fixed

CC =		c++
CFLAGS =	-Wall -Werror -Wextra  -std=c++98

RM = 		rm -rf

SRC = 		main.cpp \
			Fixed.cpp

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
