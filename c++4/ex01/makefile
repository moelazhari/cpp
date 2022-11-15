# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/19 15:32:34 by mazhari           #+#    #+#              #
#    Updated: 2022/11/11 14:54:48 by mazhari          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=	c++
FLAGS= -Wall -Wextra -Werror -std=c++98
NAME =	brain

HEDEAR= Animal.hpp Cat.hpp Dog.hpp Brain.hpp

B_DIR = build

FILES = main Animal Cat Dog Brain
OBJS = $(addprefix $(B_DIR)/, $(FILES:=.o))

all: $(NAME)

$(B_DIR)/%.o : %.cpp $(HEDEAR)
	mkdir -p $(@D)
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)
	rm -rf $(B_DIR)

fclean:	clean
	rm -f $(NAME)

re: fclean all