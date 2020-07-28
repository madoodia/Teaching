#ifndef MATHLIB_H
#define MATHLIB_H

#include <iostream>
#include <string>

namespace mathlib
{
    void printMsg(std::string msg)
    {
        std::cout << msg << std::endl;
    }

    void printMsg(int value)
    {
        std::cout << value << std::endl;
    }

    int add(int a, int b)
    {
        return a + b;
    }

    int sub(int a, int b)
    {
        return a - b;
    }

    int mul(int a, int b)
    {
        return a * b;
    }

    int divide(int a, int b)
    {
        return a / b;
    }
} // namespace mathlib

#endif // MATHLIB_H