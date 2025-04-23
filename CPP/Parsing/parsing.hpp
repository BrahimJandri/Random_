#pragma once

#include <iostream>
#include <fstream>
#include <sstream>

class Parsing
{
private:
    std::string _file_path;

public:
    Parsing(const std::string &file_path);
    void parsAndPrintInfo(std::ifstream &file);
};