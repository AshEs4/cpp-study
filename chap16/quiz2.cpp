#include <iostream>
#include <vector>
#include <cassert>

namespace Item
{
    enum type: int
    {
        health_potions,
        torches,
        arrows,
        maxtype
    };
    std::vector number{1, 5, 10};
}

std::string_view printType(int i)
{
    switch(i)
    {
        case Item::health_potions: return "health potion";
        case Item::torches:        return "torches";
        case Item::arrows:         return "arrows";
        default:                   return "???";
    }
}

void printItem(const std::vector<int>& number)
{
    int maxnumber{};
    for(int i{0}; i<Item::maxtype; ++i)
    {
        maxnumber += number[static_cast<std::size_t>(i)];
        std::cout<<"You have "<<number[static_cast<std::size_t>(i)]<<" "<<printType(i)<<'\n';
    }
    std::cout<<"You have "<<maxnumber<<" total items\n";
}

int main()
{
    assert(std::size(Item::number)==Item::maxtype);
    printItem(Item::number);
    return 0;
}