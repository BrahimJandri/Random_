#include "exception.hpp"


int main()
{
    try
    {
        exception test1;
        exception test("brahim", 29, 30000);
        test1 = test; 
        std::cout << test1 << std::endl;   
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}