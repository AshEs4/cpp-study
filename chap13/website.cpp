#include <iostream>

struct Ad
{
    int watch{0};
    double user{0};
    double profit{0};
};

Ad getAd()
{
    Ad temp;
    std::cout<<"Enter How many ads were watched: ";
    std::cin>>temp.watch;
    std::cout<<"Enter What percentage of users clicked on an ad: ";
    std::cin>>temp.user;
    std::cout<<"Enter The average earnings per clicked ad: ";
    std::cin>>temp.profit;
    return temp;
}

void printProfit(const Ad& today)
{
    std::cout<<today.watch<<" ads were watched.\n";
    std::cout<<today.user<<" percentage of users clicked on an ad.\n";
    std::cout<<"The average earnings per clicked ad is "<<today.profit<<"\n";
    std::cout<<(today.watch*today.user/100*today.profit)<<" you made for that day.\n";
}

int main()
{
    Ad todayad{getAd()};
    printProfit(todayad);
    return 0;
}