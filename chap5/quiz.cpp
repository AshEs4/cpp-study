#include <iostream>
#include <string>

std::string getName(int num)
{
    std::cout<<"Enter the name of person #"<<num<<": ";
    std::string name{};
    std::getline(std::cin>>std::ws, name);
    return name;
}

int getAge(std::string_view n)
{
    std::cout<<"Enter the age of "<<n<<": ";
    int age{};
    std::cin>>age;
    return age;
}

void printOlder(std::string_view a, std::string_view b, int x, int y)
{
    if (x>y)
        std::cout<<a<<" (age "<<x<<") is older than "<<b<<" (age "<<y<<").\n";
    else if (x<y)
        std::cout<<b<<" (age "<<y<<") is older than "<<a<<" (age "<<x<<").\n";
    return;
}

int main()
{
    std::string_view n1{getName(1)};
    const int age1{getAge(n1)};
    std::string_view n2{getName(2)};
    const int age2{getAge(n2)};
    printOlder(n1, n2, age1, age2);
    return 0;
}