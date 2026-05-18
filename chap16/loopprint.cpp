#include <iostream>
#include <limits>
#include <vector>

template<typename T>
T getNumber(T high, T low)
{
    while(true)
    {
        std::cout<<"Enter a number between "<<low<<" and "<<high<<": ";
        T temp{};
        std::cin>>temp;
        if (!std::cin)
            std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        if((temp>=low)&&(temp<=high)) return temp;
    }
}

template<typename T>
void printArray(const std::vector<T>& arr)
{
    for(std::size_t i{0}; i<std::size(arr); ++i)
    {
        std::cout<<arr[i]<<" ";
    }
    std::cout<<'\n';
}

template<typename T>
void printSearch(const std::vector<T>& arr, T t)
{
    std::size_t index{};
    for(std::size_t i{0}; i<std::size(arr); ++i)
    {
        if(arr[i]==t) index=i;
    }
    if(index)
        std::cout<<"The number "<<t<<" has index "<<index<<'\n';
    else
        std::cout<<"The number "<<t<<" was not found\n";
}

int main()
{
    constexpr double high{9.0};
    constexpr double low{1.0};
    double target{getNumber(high,low)};
    std::vector arr{ 4.4, 6.6, 7.7, 3.3, 8.8, 2.2, 1.1, 9.9 };
    
    printArray(arr);
    printSearch(arr, target);

    return 0;
}