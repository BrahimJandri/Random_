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


    std::string getName();
    int getAge();
    int getSalary();
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

std::ostream &operator<<(std::ostream &out, exception &e);

#endif