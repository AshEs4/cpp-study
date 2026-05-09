#include <iostream>

int readNumber()
{
    int num {};
    std::cin>>num;
    return num;
}

void writeAnswer(int ans)
{
    std::cout<<"Answer is: "<<ans<<'\n';
}

int main()
{
    std::cout<<"Enter two integers: ";
    writeAnswer(readNumber()+readNumber());
    return 0;
}