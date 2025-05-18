#pragma once

#include <fstream>
#include <iostream>
#include <map>
#include <cstdlib>
#include <stdexcept>
#include <sstream>
#include <vector>


class iofile
{
public:
    iofile(const std::string &datafile);
    ~iofile();

    void loadDatabase(const std::string &datafile);
    std::map<std::string, int, std::string> _map;
};