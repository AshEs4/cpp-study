#include <iostream>

int main()
{
    int i{1};
    while (i<=5)
    {
        int j{5};
        while (j>=1)
        {
            if (i>=j)
                std::cout<<j<<" ";
            else
                std::cout<<"  ";
            --j;
        }
        ++i;
        std::cout<<"\n";
    }
    return 0;
}