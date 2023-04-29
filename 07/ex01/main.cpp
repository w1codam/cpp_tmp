#include <iostream>
#include <string>
#include "iter.hpp"

void inc(int& i)
{
	i++;
}

void no_caps(char& c)
{
	if (c >= 'A' && c <= 'Z')
		c += 'a' - 'A';
}

int main(void)
{
	int	arr[5] = {4, 1, 6, 9, 2};
	iter(arr, sizeof(arr) / sizeof(int), &inc);
	for (int i = 0; i < 5; i++)
		std::cout << i << ": " << arr[i] << std::endl;

	char str[] = "HelLo EverYonE!";
	std::cout << str << std::endl;
	iter(str, strlen(str), &no_caps);
	std::cout << str << std::endl;
}
