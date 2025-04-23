#include "parsing.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
        std::cerr << "Error" << std::endl;
    else
        Parsing file(av[1]);
}