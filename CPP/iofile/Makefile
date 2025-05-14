CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp iofile.cpp
OBJ = $(SRC:.cpp=.o)

all: iofile

iofile: $(OBJ)
	$(CXX) $(CXXFLAGS) -o iofile $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -rf iofile

re: fclean all

.SECONDARY:
.PHONY: all clean fclean re