#ifndef EXCEPTION_HPP
#define EXCEPTION_HPP

#include <iostream>

class exception
{
private:
    std::string _name;
    int _age;
    double _salary;

public:
    exception();
    exception(const exception &other);
    exception &operator=(const exception &other);
    ~exception();

    
}

#endif