#include <iostream>

int main()
{
	//1.9

	std::cout << "Hello World! \n";
	int x{ 5 };

	std::cout << 5 << '\n';
	std::cout << x << '\n';

	std::cout << x + 5 << '\n';

	int y{ 10 };

	std::cout << x + y << '\n';

	int result{ x + y };

	std::cout << result << '\n';

	return 0;
}