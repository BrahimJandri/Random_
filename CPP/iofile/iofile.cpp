#include "iofile.hpp"

iofile::iofile(const std::string &datafile)
{
    loadDatabase(datafile);
}

void iofile::loadDatabase(const std::string &dataFile)
{
    std::ifstream file(dataFile.c_str());
    if (!file)
    {
        std::cerr << "Can't open file" << std::endl;
    }

    std::string line;
    getline(file, line);
    while (getline(file, line))
    {
        std::istringstream ss(line);
        std::string _name, _ageF, _city;
        if (getline(ss, _name, '-') && getline(ss, _ageF, '-') && getline(ss, _city))
        {
            int age = std::atol(_ageF.c_str());
            _map[_name] = age;
        }
    }
    if(std::map<int>::iterator)
}

iofile::~iofile() {}