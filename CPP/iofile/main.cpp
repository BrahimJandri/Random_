#include "iofile.hpp"


int main(int ac, char **av)
{
    if(ac != 2)
    {
        std::cerr << "Error" << std::endl;
        return(1);
    }
    iofile file(av[1]);
}