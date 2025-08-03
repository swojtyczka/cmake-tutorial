#include <iostream>
#include <sum.hpp>

int main()
{
	int x, y;
	std::cin >> x >> y;
	std::cout << sum(x, y) << std::endl;

	return 0;
}