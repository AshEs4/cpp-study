#include <iostream>

double getNumber()
{
    std::cout<<"Enter a double value: ";
    double num{};
    std::cin>>num;
    return num;
}

int main()
{
    double x{getNumber()};
    double y{getNumber()};
    std::cout<<"Enter +, -, *, or /: ";
    char op{};
    std::cin>>op;
    if (op=='+')
        std::cout<<x<<" "<<op<<" "<<y<<" is "<<x+y<<'\n';
    else if (op=='-')
        std::cout<<x<<" "<<op<<" "<<y<<" is "<<x-y<<'\n';
    else if (op=='*')
        std::cout<<x<<" "<<op<<" "<<y<<" is "<<x*y<<'\n';
    else if (op=='/')
        std::cout<<x<<" "<<op<<" "<<y<<" is "<<x/y<<'\n';
    return 0;
}