#include "iofile.hpp"

iofile::iofile(const std::string &datafile)
{
    loadDatabase(datafile);
}

void iofile::loadDatabase(const std::string &dataFile)
{
    std::ifstream file(dataFile.c_str());
    if (!file)
        throw std::runtime_error("Error: could not open database file.");
}

iofile::~iofile() {}