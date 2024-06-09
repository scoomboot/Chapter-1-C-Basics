#include <iostream>

int main()
{
	//1.11 — Developing your first program

	std::cout << "***********************\n";
	std::cout << "*    MULTIPLY BY 2    *\n";
	std::cout << "***********************\n\n";

	std::cout << "Enter an integer: ";

	int a{};
	std::cin >> a;

	std::cout << "Double that number is: " << a * 2 << '\n';

	return 0;
}