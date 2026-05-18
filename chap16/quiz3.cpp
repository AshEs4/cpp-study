#include <iostream>
#include <vector>
#include <utility>

template<typename T>
std::pair<std::size_t, T> findMax(const std::vector<T>& v)
{
    std::pair<std::size_t, T> max{0, v[0]};
    for(std::size_t i{1}; i<std::size(v); ++i)
    {
        if(v[i] > max.second)
        {
            max.second = v[i];
            max.first = i;
        }
    }
    return max;
}

template<typename T>
std::pair<std::size_t, T> findMin(const std::vector<T>& v)
{
    std::pair<std::size_t, T> min{0, v[0]};
    for(std::size_t i{1}; i<std::size(v); ++i)
    {
        if(v[i] < min.second)
        {
            min.second = v[i];
            min.first = i;
        }
    }
    return min;
}

template<typename T>
void printMinandMax(const std::vector<T>& v)
{
    std::cout<<"With array ( ";
    for(std::size_t i{0}; i<std::size(v); ++i)
    {
        if(i == (std::size(v)-1)) std::cout<<v[i];
        else std::cout<<v[i]<<", ";
    }
    std::cout<<" ):\n";
    std::pair<std::size_t, T> max{findMax(v)};
    std::pair<std::size_t, T> min{findMin(v)};
    std::cout<<"The min element has index "<<min.first<<" and value "<<min.second<<'\n';
    std::cout<<"The max element has index "<<max.first<<" and value "<<max.second<<'\n';
}

int main()
{
    std::vector v1 { 3, 8, 2, 5, 7, 8, 3 };
    printMinandMax(v1);
    std::vector v2 { 5.5, 2.7, 3.3, 7.6, 1.2, 8.8, 6.6 };
    printMinandMax(v2);
    return 0;
}