#include <iostream>

#include <date.h>

int main()
{
	Date d1, d2;
	std::cout << "Enter date 1 (DD/MM/YYYY): ";
	std::cin >> d1;
	std::cout << std::endl;
	std::cout << "Enter date 2 (DD/MM/YYYY): ";
	std::cin >> d2;
	std::cout << d1 << std::endl;
	std::cout << d2 << std::endl;
	std::cout << (d1 < d2 ? "d1 < d2" : "d1 >= d2") << std::endl;
	Date d3(20, 11, 2031);
	std::cout << d3.toString() << std::endl;
	return 0;
}