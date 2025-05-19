#include "rnp.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cerr << "Error!" <<  std::endl;
        return 0;
    }
    try
    {
        rnp rpn;
        int result = rpn.exec_rnp(av[1]);
        std::cout << result << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Error" << std::endl;
        return 1;
    }

    return 0;
}