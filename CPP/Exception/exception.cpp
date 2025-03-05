#include "exception.hpp"

exception::exception() : _name("L3riss"), _age(32), _salary(10000)
{
    std::cout << "Default Constractor" << std::endl;
    if (_age < 28)
        throw exception::AgeTooLow();
    if (_age > 32)
        throw exception::AgeTooHigh();
    if (_salary < 10000)
        throw exception::SalaryTooLow();
}

exception::exception(const exception &other) : _name(other._name), _age(other._age), _salary(other._salary)
{
    if (_age < 28)
        throw exception::AgeTooLow();
    if (_age > 32)
        throw exception::AgeTooHigh();
    if (_salary < 10000)
        throw exception::SalaryTooLow();
}

exception &exception::operator=(const exception &other)
{
    if (this != &other)
    {
        this->_age = other._age;
        this->_name = other._name;
        this->_salary = other._salary;
    }
    return *this;
}

const char *exception::AgeTooHigh::what() const throw()
{
    return "Age too High";
}

const char *exception::AgeTooLow::what() const throw()
{
    return "Age too Low";
}

const char *exception::SalaryTooLow::what() const throw()
{
    return "Salary is too low";
}

exception::~exception()
{
    std::cout << "Default Destractor" << std::endl;
}

std::string exception::getName()
{
    return _name;
}

int exception::getAge()
{
    return _age;
}

int exception::getSalary()
{
    return _salary;
}

std::ostream &operator<<(std::ostream &out, exception &e)
{
    out << "Husband Name is " << e.getName() << " he's age is " << e.getAge() << " he's Salary is " << e.getSalary() << " DH";
    return out;
}