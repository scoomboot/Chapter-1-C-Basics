#include <iostream>

int main()
{
	//1.10 — Introduction to expressions

	int a{ 2 };
	int b{ 2 + 2 };
	int c{ (2 * 2) + 2 };
	int d{ a };

	std::cout << a << '\n';
	std::cout << b << '\n';
	std::cout << c << '\n';
	std::cout << d << '\n';

	return 0;
}