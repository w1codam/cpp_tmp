#include <iostream>
#include <string>
#include <vector>
#include "easyfind.hpp"

int main(void)
{
	std::vector<int>	test;

	test.push_back(20);
	test.push_back(2);
	test.push_back(4);
	test.push_back(16);
	test.push_back(42);
	test.push_back(100);
	test.push_back(9);

	std::cout << *++easyfind(test, 16) << std::endl;
	try
	{
		std::cout << *++easyfind(test, 333) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
}
