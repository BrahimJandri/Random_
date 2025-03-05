#include "exception.hpp"


int main()
{
    try
    {
        exception test;
        std::cout << test << std::endl;   
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}