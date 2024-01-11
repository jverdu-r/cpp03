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