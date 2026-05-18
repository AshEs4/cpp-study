#include <iostream>
#include <vector>
#include <string>
#include <string_view>

template<typename T>
bool isValueInArray(const std::vector<T>& arr, T name)
{
    for(T n : arr)
    {
        if(n == name) return true;
    }
    return false;
}

int main()
{
    std::vector<std::string_view> namearr = { "Alex", "Betty", "Caroline", "Dave", "Emily", "Fred", "Greg", "Holly"};
    std::cout<<"Enter a name: ";
    std::string name{};
    std::cin>>name;
    if(isValueInArray<std::string_view>(namearr, name))
        std::cout<<name<<" was found.\n";
    else
        std::cout<<name<<" was not found.\n";
    return 0;
}