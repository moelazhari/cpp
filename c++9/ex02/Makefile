# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/08 22:51:51 by mazhari           #+#    #+#              #
#    Updated: 2023/04/11 01:32:47 by mazhari          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=	c++
FLAGS= -Wall -Wextra -Werror -g -std=c++98
NAME = PmergeMe

HEDEAR= PmergeMe.hpp

B_DIR = build

FILES = main PmergeMe

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