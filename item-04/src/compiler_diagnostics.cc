#include <iostream>

template <typename T>
class TypeDisplayer;

int main()
{
	const int theAnswer = 42;
	auto x = theAnswer;
	auto y = &theAnswer;

	TypeDisplayer<decltype(x)> xType;
	TypeDisplayer<decltype(y)> yType;
}
