# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: libacchu <libacchu@students.42wolfsburg    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/02 13:55:52 by libacchu          #+#    #+#              #
#    Updated: 2022/11/02 14:00:58 by libacchu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		BraiiiiiiinnnzzzZ

CC = 		c++
CFLAGS =	-Wall -Wextra -Werror -std=c++98

RM =		rm -rf

SRC =		main.cpp \
			Zombie.cpp \
			newZombie.cpp \
			randomChump.cpp

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
