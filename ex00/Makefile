# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jverdu-r <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/17 16:53:53 by jverdu-r          #+#    #+#              #
#    Updated: 2024/01/17 16:53:55 by jverdu-r         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = g++

CXXFLAGS = -std=c++98 -Wall -Werror -Wextra

SRC = src/ClapTrap.cpp \
	  src/main.cpp

TARGET = ClapTrap

all: $(TARGET)

$(TARGET): $(SRC)
		$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

clean:
		rm -f $(TARGET)
