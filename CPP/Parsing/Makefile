CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = parsing.cpp main.cpp
OBJ = $(SRC:.cpp=.o)

all: parsing

parsing : $(OBJ)
	$(CXX) $(CXXFLAGS) -o parsing $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -rf parsing