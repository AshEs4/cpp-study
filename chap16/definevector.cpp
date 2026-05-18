#include <iostream>
#include <vector>

int main()
{
    std::vector squarenum {1, 4, 9, 16, 25};
    std::vector<double> hightemp(365);
    std::vector<int> values(3);
    std::cout<<"Enter 3 integers: ";
    std::cin>>values[1]>>values[2]>>values[3];
    std::cout<<"The sum is: "<<values[1]+values[2]+values[3]<<"\n";
    std::cout<<"The product is: "<<values[1]*values[2]*values[3]<<"\n";
    return 0;
}