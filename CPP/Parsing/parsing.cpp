#include "parsing.hpp"

Parsing::Parsing(const std::string &file_path) : _file_path(file_path)
{
    std::ifstream file(file_path.c_str());
    parsAndPrintInfo(file);
}

void Parsing::parsAndPrintInfo(std::ifstream &file)
{
    std::string line;
    bool inside = false;

    while (std::getline(file, line))
    {
        // Remove leading/trailing whitespace
        line.erase(0, line.find_first_not_of(" \t"));
        line.erase(line.find_last_not_of(" \t") + 1);

        if (line == "Info {")
        {
            inside = true;
            continue;
        }
        if (line == "}" && inside)
            break;

        if (inside)
        {
            std::istringstream input(line);
            std::string key, colon, value;

            input >> key >> colon;
            std::getline(input, value, ';');  // Read until ';'

            // Remove potential leading space in value
            value.erase(0, value.find_first_not_of(" \t"));

            if (!key.empty() && !value.empty())
                std::cout << key << ": " << value << std::endl;
        }
    }
}