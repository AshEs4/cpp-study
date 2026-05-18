#include <cassert>
#include <iostream>
#include <vector>

namespace Animal
{
    enum name
    {
        chicken, 
        dog, 
        cat, 
        elephant, 
        duck, 
        snake,
        maxanimal
    };
}

int main()
{
    const std::vector<int> animallegs{2, 4, 4, 4, 2, 0};
    assert(std::size(animallegs)==Animal::maxanimal);
    std::cout<<"The elephant has "<<animallegs[Animal::elephant]<<" legs.\n";
    return 0;
}