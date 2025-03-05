#include "exception.hpp"


int main()
{
    try
    {
        exception test;        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}