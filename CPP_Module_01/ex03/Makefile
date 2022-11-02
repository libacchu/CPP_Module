# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/02 16:08:53 by libacchu          #+#    #+#              #
#    Updated: 2022/11/02 16:13:44 by libacchu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		unnecessary_violence

CC = 		c++
CFLAGS =	-Wall -Wextra -Werror -std=c++98

RM =		rm -rf

SRC =		main.cpp \
			HumanA.cpp \
			HumanB.cpp \
			Weapon.cpp

OBJ =		$(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	
clean:
	$(RM) *.o;

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
