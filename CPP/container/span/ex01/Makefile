CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98

SRC = main.cpp Span.cpp
OBJ = $(SRC:.cpp=.o)

all: Span

Span: $(OBJ)
	$(CXX) $(CXXFLAGS) -o Span $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -rf Span

re: fclean all

.SECONDARY:
.PHONY: all clean fclean re