#include <iostream>

void printNumber(int n, int position)
{
    std::cout<<(n/position)%2;
    return;
}

void switchNumber(int n)
{
    printNumber(n, 128);
    printNumber(n, 64);
    printNumber(n, 32);
    printNumber(n, 16);
    std::cout<<" ";
    printNumber(n, 8);
    printNumber(n, 4);
    printNumber(n, 2);
    printNumber(n, 1);
}

int main()
{
    std::cout<<"Enter a number between 0 and 255: ";
    int num{};
    std::cin>>num;
    switchNumber(num);
    return 0;
}