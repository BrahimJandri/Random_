#pragma once

#include "iostream"
#include "stdexcept"
#include "stack"
#include "sstream"

class rnp
{
private:
    std::stack<int> stack;
    bool isOperator(const std::string &op) const;
    int calculate(int a, int b, const std::string &op) const;
public:
    rnp();
    ~rnp();

    int exec_rnp(const std::string &exp);

};
