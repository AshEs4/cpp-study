#include <iostream>

bool isPrime(int x)
{
    return (x==2)or(x==3)or(x==5)or(x==7);
}


int main()
{
    std::cout<<"Enter a number 0 through 9: ";
    int num{};
    std::cin>>num;
    if (isPrime(num))
        std::cout<<"The digit is prime\n";
    else
        std::cout<<"The digit is not prime\n";
    return 0;
}