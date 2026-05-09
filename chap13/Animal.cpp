#include <iostream>

enum class Animal
{
    pig,
    chicken,
    goat,
    cat,
    dog,
    duck
};

constexpr std::string_view getAnimalName(Animal anm)
{
    using enum Animal;
    switch(anm)
    {
        case pig: return "pig";
        case chicken: return "chicken";
        case goat: return "goat";
        case cat: return "cat";
        case dog: return "dog";
        case duck: return "duck";
        default: return "No such animal!";
    }
}

void printNumberOfLegs(Animal anm)
{
    using enum Animal;
    switch(anm)
    {
        case pig: 
        std::cout<<"A pig has 4 legs.\n";
        return;
        case chicken: 
        std::cout<<"A chicken has 2 legs.\n";
        return;
        case goat:
        std::cout<<"A goat has 4 legs.\n";
        return;
        case cat:
        std::cout<<"A cat has 4 legs.\n";
        return;
        case dog:
        std::cout<<"A dog has 4 legs.\n";
        return;
        case duck:
        std::cout<<"A duck has 2 legs.\n";
        return;
        default:
        std::cout<<"No such animal!";
        return;
    }
}

int main()
{
    Animal anm1 {Animal::cat};
    Animal anm2 {Animal::chicken};
    printNumberOfLegs(anm1);
    printNumberOfLegs(anm2);
    return 0;
}