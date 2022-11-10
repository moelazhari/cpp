# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/19 15:32:34 by mazhari           #+#    #+#              #
#    Updated: 2022/11/09 13:29:41 by mazhari          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=	c++
FLAGS= -Wall -Wextra -Werror -std=c++98
NAME =	frag

HEDEAR= ClapTrap.hpp FragTrap.hpp

B_DIR = build

FILES = main ClapTrap FragTrap
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