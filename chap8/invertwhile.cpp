#include <iostream>

int main()
{
    int i{1};
    while(i<=5)
    {
        int j{5};
        while(j>=i)
        {
            std::cout<<j-i+1<<" ";
            --j;
        }
        std::cout<<'\n';
        ++i;
    }
}