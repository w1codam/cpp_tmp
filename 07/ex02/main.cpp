#include <iostream>
#include <string>
#include "Array.hpp"

// #define MAX_VAL 750
// int main(void)
// {
// 	Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[0] = rand();
//     }
//     delete [] mirror;
//     return 0;
// }

int main(void)
{
	Array<int> arr(20);

	try
	{
		arr[20] = 32497;
	}
	catch (const Array<int>::OutOfBoundsException& e)
	{
		std::cerr << "custom exception: " << e.what() << std::endl;
	}
	catch (const std::exception& e) { std::cerr << "this won't run" << std::endl; }
	
	std::cout << "========================================================================" << std::endl;

	for (size_t i = 0; i < 20; i++)
		std::cout << arr[i] << ", ";
	std::cout << std::endl;
	for (int i = 0; i < 5; i++)
		arr[std::rand() % 20] = std::rand() % 100;
	for (size_t i = 0; i < 20; i++)
		std::cout << arr[i] << ", ";
	std::cout << std::endl;

	std::cout << "========================================================================" << std::endl;

	Array<int> copy(arr);
	copy[12] = 111;
	for (size_t i = 0; i < 20; i++)
		std::cout << arr[i] << ", ";
	std::cout << std::endl;
	for (size_t i = 0; i < 20; i++)
		std::cout << copy[i] << ", ";
	std::cout << std::endl;

	std::cout << "========================================================================" << std::endl;

	std::cout << "size: " << Array<char>().size() << std::endl;
	std::cout << "size: " << Array<long>(20).size() << std::endl;
	std::cout << "size: " << Array<void*>(999).size() << std::endl;
}
