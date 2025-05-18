#pragma once

#include <algorithm>
#include <cmath>
#include <iostream>
#include <exception>
#include <vector>

class Span
{
private:
    std::vector<int> _span;
    unsigned int _maxSize;
public:
    Span(unsigned int N);
    ~Span();
    void addNumber(unsigned int num);
};