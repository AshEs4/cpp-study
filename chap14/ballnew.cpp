#include <iostream>

class Ball
{
    private:
    std::string m_color{"black"};
    double m_radius{10.0};

    public:
    void print()
    {
        std::cout<<"Ball("<<m_color<<", "<<m_radius<<")\n";
    }

    Ball(double r)
        :Ball{"black", r}
    {}

    Ball(std::string_view c="black", double r=10.0)
        : m_color{c}, m_radius{r}
    {print();}
};

int main()
{
    Ball def{};
    Ball blue{ "blue" };
    Ball twenty{ 20.0 };
    Ball blueTwenty{ "blue", 20.0 };

    return 0;
}