#ifndef EXCEPTION_HPP
#define EXCEPTION_HPP

#include <iostream>

class exception
{
private:
    std::string _name;
    int _age;
    int _salary;

public:
    exception();
    exception(const exception &other);
    exception &operator=(const exception &other);
    ~exception();

    class AgeTooHigh : public std::exception
    {
    public:
        const char *what() const throw();
    };

    class SalaryTooLow : public std::exception
    {
        public:
        const char *what() const throw();
    };

    class AgeTooLow : public std::exception
    {
    public:
        const char *what() const throw();
    };
};

#endif