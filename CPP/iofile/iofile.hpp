#pragma once

#include <fstream>
#include <iostream>
#include <map>
#include <cstdlib>
#include <stdexcept>

class iofile
{
public:
    iofile(const std::string &datafile);
    ~iofile();

    void loadDatabase(const std::string &datafile);
    std::map<std::string, float> _map;
};