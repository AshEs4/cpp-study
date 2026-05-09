#include "Random.h"
#include <iostream>

void numberGuess(int guesses, int min, int max)
{
    std::cout<<"Let's play a game. I'm thinking of a number between 1 and 100. You have 7 tries to guess what it is.\n";
    const int ans {Random::get(min,max)};
    for(int i {1}; i <= guesses; ++i)
    {
        std::cout<<"Guess #"<<i<<": ";
        int guess{};
        std::cin>>guess;
        if (guess == ans)
        {
            std::cout<<"Correct! You win!\n";
            return;
        }
        else if (guess > ans)
            std::cout<<"Your guess is too high.\n";
        else
            std::cout<<"Your guess is too low.\n";
    }
    std::cout<<"Sorry, you lose. The correct number was "<<ans<<".\n";
    return;
}

int main()
{
    constexpr int guesses { 7 }; 
	constexpr int min     { 1 };
	constexpr int max     { 100 };
    numberGuess(guesses, min, max);
    while(true)
    {
        std::cout<<"Would you like to play again (y/n)? ";
        char check{};
        std::cin>>check;
        switch (check)
        {
        case 'y':
            numberGuess(guesses, min, max);
            break;
        case 'n':
            std::cout<<"Thank you for playing.\n";
            return 0;
        }
    }
}