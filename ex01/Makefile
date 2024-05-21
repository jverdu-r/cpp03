# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jverdu-r <jverdu-r@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/17 16:54:51 by jverdu-r          #+#    #+#              #
#    Updated: 2024/05/21 18:12:46 by jverdu-r         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++

CXXFLAGS = -std=c++98 -Wall -Werror -Wextra -Wextra -fsanitize=address -g3

SRC = src/ClapTrap.cpp \
	  src/ScavTrap.cpp \
	  src/main.cpp

TARGET = ScavTrap

all: $(TARGET)

$(TARGET): $(SRC)
		$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

clean:
		rm -f $(TARGET)
