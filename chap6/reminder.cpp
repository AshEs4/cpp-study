#include <iostream>

int getNumber()
{
    std::cout<<"Enter an integer: ";
    int num{};
    std::cin>>num;
    return num;
}

constexpr bool isEven(int num)
{
    return ((num%2)==0);
}

int main()
{
    const int number{getNumber()};
    if (isEven(number))
        std::cout<<number<<" is even\n";
    else
        std::cout<<number<<" is odd\n";
    return 0;
}