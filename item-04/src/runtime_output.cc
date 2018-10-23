#include <iostream>
#include <typeinfo>

int main()
{
	const int theAnswer = 42;
	auto x = theAnswer;
	auto y = &theAnswer;

	std::cout << typeid(x).name() << std::endl;
	std::cout << typeid(y).name() << std::endl;
}
