#include <iostream>

int main()
{
	//1.5

	int x; // This is an uninitialized vairable, we have not given it a value.

	std::cout << x; // this will give an error "uninitialized local variable"s

	return 0;
}