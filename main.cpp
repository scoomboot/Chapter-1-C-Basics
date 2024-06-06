#include <iostream>

int main()
{
	//1.5

	int width{};
	int length{};

	std::cout << "Enter the width.\n";
	std::cin >> width;
	std::cout << "Enter the length.\n";
	std::cin >> length;

	std::cout << "The area of your rectangle is: " << length * width << "\n";

	return 0;
}