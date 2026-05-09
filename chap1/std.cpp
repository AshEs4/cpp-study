#include <iostream>

int main()
{
    std::cout<<"enter a number: ";
    int x {};
    std::cin>>x;
    std::cout<<"x equals to "<<x<<std::endl;
    // we often use \n
    std::cout<<"x equals to "<<x<<'\n';
    std::cout<<"hello world!\n";
    std::cout<<"x equals to"<<std::endl;
    std::cout<<x<<std::endl;
    return 0;
}