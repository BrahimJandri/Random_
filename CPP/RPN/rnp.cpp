#include "rnp.hpp"

rnp::rnp() {}
rnp::~rnp() {}

bool rnp::isOperator(const std::string &op) const
{
    if (op == "+" || op == "-" || op == "/" || op == "*")
        return true;
    return false;
}

int rnp::calculate(int a, int b, const std::string &op) const
{
    if (op == "+")
        return a + b;
    if (op == "-")
        return a - b;
    if (op == "*")
        return a * b;
    if (op == "/")
    {
        if(b == 0)
            throw std::runtime_error("Error! Divede by zero");
        return a / b;
    }
    else
        throw std::runtime_error("Error Unkown operator");
}

int rnp::exec_rnp(const std::string &exp)
{
    std::istringstream ss(exp);
    std::string token;

    while (ss >> token)
    {
        if(token.size() == 1 && isdigit(token[0]))
        {
            stack.push(token[0] - '0');
        }
        else if(isOperator(token))
        {
            int b = stack.top();
            stack.pop();
            int a = stack.top();
            stack.pop();
            int res = calculate(a, b, token);
            stack.push(res);
        }
        else
            throw std::runtime_error("Error!");
    }

    if(stack.size() != 1)
        throw std::runtime_error("Error!");
    return stack.top();
}