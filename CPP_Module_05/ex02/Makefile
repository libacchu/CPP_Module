# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/17 14:33:08 by libacchu          #+#    #+#              #
#    Updated: 2022/12/12 13:42:37 by libacchu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		bureaucrat

CC =		c++
CFLAGS =	-Wall -Werror -Wextra  -std=c++98 -g

RM = 		rm -rf

SRC = 		main.cpp \
			Bureaucrat.cpp \
			Form.cpp

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
