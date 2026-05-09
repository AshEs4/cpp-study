#include <iostream>

namespace Monster
{
    enum MonsterType
    {
        orc,
        goblin,
        troll,
        ogre,
        skeleton
    };
}

int main()
{
    [[maybe_unused]] Monster::MonsterType monster1 {Monster::troll};
    return 0;
}