#include <iostream>

std::string getQuantityPhrase(int a)
{
    if (a<0)
        return "negetive";
    else if (!a)
        return "no";
    else if (a==1)
        return "a single";
    else if (a==2)
        return "a couple of";
    else if (a==3)
        return "a few";
    else
        return "many";
}

std::string getApplesPluralized(int a)
{
    return (a==1)?"apple":"apples";
}

int main()
{
    constexpr int maryApples { 3 };
    std::cout << "Mary has " << getQuantityPhrase(maryApples) << ' ' << getApplesPluralized(maryApples) << ".\n";

    std::cout << "How many apples do you have? ";
    int numApples{};
    std::cin >> numApples;

    std::cout << "You have " << getQuantityPhrase(numApples) << ' ' << getApplesPluralized(numApples) << ".\n";

    return 0;
}