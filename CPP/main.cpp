#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
    if(ac != 2)
    {
        std::cerr << "ERROR!" << std::endl;
        return (1);
    }
    std::string file_s = av[1];
    std::ifstream file(file_s.c_str());
    if(!file)
    {
        std::cerr << "ERROR!" << std::endl;
        return (1);
    }
    std::string line;
    getline(file, line);
    getline(file, line);
    getline(file, line);
    std::cout << line << std::endl;
}