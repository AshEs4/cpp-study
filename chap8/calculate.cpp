#include <iostream>

int calculate(int x, int y, char opr)
{
    switch (opr)
    {
    case '+':
        return x+y;
    case '-':
        return x-y;
    case '*':
        return x*y;
    case '/':
        return x/y;
    case '%':
        return x%y;
    default:
        std::cout<<"An invalid operator!";
        return 0;
    }
}