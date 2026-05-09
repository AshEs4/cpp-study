#include <iostream>

struct fraction
{
    int numerator{};
    int denominator{};
};

fraction getFraction()
{
    fraction temp{};
    std::cout<<"Enter a value for the numerator: ";
    std::cin>>temp.numerator;
    std::cout<<"Enter a value for the denominator: ";
    std::cin>>temp.denominator;
    std::cout<<"\n";
    return temp;
}

fraction multiplyFraction(const fraction& f1, const fraction& f2)
{
    return fraction{f1.numerator*f2.numerator, f1.denominator*f2.denominator};
}

void printFraction(const fraction& f)
{
    std::cout<<"Your fractions multiplied together: "<<f.numerator<<"/"<<f.denominator<<"\n";
}

int main()
{
    fraction f1{getFraction()};
    fraction f2{getFraction()};
    printFraction(multiplyFraction(f1, f2));
}