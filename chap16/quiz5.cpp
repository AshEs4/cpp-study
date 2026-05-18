#include <iostream>
#include "Random.h"
#include <string>
#include <string_view>
#include <vector>

void printWelcome()
{
    std::cout<<"Welcome to C++man (a variant of Hangman)\n";
    std::cout<<"To win: guess the word.  To lose: run out of pluses.\n";
}

namespace Settings
{
    constexpr int wrongGuessesAllowed { 6 };
}

namespace Wordlist
{
    std::vector<std::string_view> list{"mystery", "broccoli", "account", "almost", "spaghetti", "opinion", "beautiful", "distance", "luggage"};
    std::string_view wordGenerate()
    {
        return Wordlist::list[(Random::get<std::size_t>(0,std::size(Wordlist::list)-1))];
    }
}

class Session
{
    private:
    std::string_view m_word{Wordlist::wordGenerate()};
    std::vector<bool> m_guessed{std::vector<bool>(26)};
    int m_wrongGuessesLeft { Settings::wrongGuessesAllowed };
    public:
    std::string_view getWord() const { return m_word; }
    bool isGuessed(char letter) const { return m_guessed[static_cast<std::size_t>((letter%32)-1)]; }
    void setGuessed(char letter){m_guessed[static_cast<std::size_t>((letter%32)-1)]=true;}
    int wrongGuessesLeft() const { return m_wrongGuessesLeft; }
    void removeGuess() { --m_wrongGuessesLeft; }
    bool isWord(char letter) const
    {
        for(char word: m_word)
        {
            if(word == letter)
                return true;
        }
        return false;
    }

    bool isWin()
    {
        for(char word: m_word)
        {
            if(!m_guessed[static_cast<std::size_t>((word%32)-1)])
                return false;
        }
        return true;
    }
};
void gameStatus(const Session& s)
{
    std::cout<<"The word: ";
    for(char word: s.getWord())
    {
        if(s.isGuessed(word))
            std::cout<<word;
        else
            std::cout<<"_";
    }
    std::cout<<"   Wrong guesses: ";
    for(int i{0}; i<s.wrongGuessesLeft(); ++i)
    {
        std::cout<<"+";
    }
    for(char c{'a'}; c<='z'; ++c)
    {
        if((s.isGuessed(c))&&(!s.isWord(c)))
            std::cout<<c;
    }
    std::cout<<'\n';
}


char getLetter(const Session& s)
{
    while(true)
    {
        std::cout<<"Enter your next letter: ";
        char letter{};
        std::cin>>letter;
        if (!std::cin)
        {
            std::cin.clear();
            std::cout << "That wasn't a valid input.  Try again.\n";
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        if(!(letter>='a')&&(letter<='z'))
            {std::cout<<"That wasn't a valid input.  Try again.\n"; continue;}
        if(s.isGuessed(letter))
            {std::cout<<"You already guessed that.  Try again.\n"; continue;}
        return letter;
    }                
}

void printGuess(Session& s, char letter)
{
    s.setGuessed(letter);
    if(s.isWord(letter))
        std::cout<<"Yes, '"<<letter<<"' is in the word!\n";
    else
    {
        std::cout<<"No, '"<<letter<<"' is not in the word!\n";
        s.removeGuess();
    }
}

int main()
{
    printWelcome();
    Session s{};
    while(s.wrongGuessesLeft()>0)
    {
        gameStatus(s);
        printGuess(s, getLetter(s));
        if(s.isWin())
        {
            std::cout << "You won!\n";
            return 0;
        }
    }
    std::cout << "You lost!  The word was: " << s.getWord() << '\n';
    return 0;
}