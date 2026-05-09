#include <iostream>
#include <string>
#include <string_view>

struct Monster
{
    enum MonsterType
    {
        ogre,
        dragon,
        orc,
        giantspider,
        slime
    };
    MonsterType mt{};
    std::string name{};
    int health{};
};

constexpr std::string_view getType(const Monster& m)
{
    switch(m.mt)
    {
        case Monster::ogre: return "Orge";
        case Monster::dragon: return "Dragon";
        case Monster::orc: return "Orc";
        case Monster::giantspider: return "Giantspider";
        case Monster::slime: return "Slime";
        default: return "???";
    }
}

void printMonster(const Monster& m)
{
    std::cout<<"This "<<getType(m)<<" is named "<<m.name<<" and has "<<m.health<<" health.\n";
}

int main()
{
    Monster monster1{Monster::ogre, "Torg", 145};
    Monster monster2{Monster::slime, "Blurp", 23};
    printMonster(monster1);
    printMonster(monster2);
    return 0;
}