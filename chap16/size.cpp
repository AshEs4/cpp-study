#include <iostream>
#include <vector>

int main()
{
    std::vector h {'h','e','l','l','o'};
    std::cout<<"The array has "<<std::size(h)<<" elements.\n";
    std::cout<<h[1]<<h.at(1)<<"\n";
}