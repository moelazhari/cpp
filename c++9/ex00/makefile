# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/07 00:38:11 by mazhari           #+#    #+#              #
#    Updated: 2023/04/07 00:40:26 by mazhari          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=	c++
FLAGS= -Wall -Wextra -Werror -std=c++98
NAME =	btc

HEDEAR= BitcoinExchange.hpp

B_DIR = build

FILES = main BitcoinExchange

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