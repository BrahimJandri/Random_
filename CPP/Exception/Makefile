CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98

SRC = main.cpp exception.cpp

OBJ=$(SRC:.cpp=.o)

all: exception

exception: $(OBJ)
	$(CXX) $(CXXFLAGS) -o exception $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -rf exception

re: fclean all
