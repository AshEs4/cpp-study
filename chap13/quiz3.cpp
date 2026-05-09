#include <iostream>

template <typename T>
struct Triad
{
    T num1{};
    T num2{};
    T num3{};
};

template <typename T>
void print(Triad<T> t)
{
    std::cout<<"["<<t.num1<<", "<<t.num2<<", "<<t.num3<<"]";
}

int main()
{
	Triad t1{ 1, 2, 3 }; // note: uses CTAD to deduce template arguments
	print(t1);

	Triad t2{ 1.2, 3.4, 5.6 }; // note: uses CTAD to deduce template arguments
	print(t2);

	return 0;
}