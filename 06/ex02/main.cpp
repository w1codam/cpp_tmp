#include <iostream>
#include "Base.hpp"

Base*	generate(void)
{
	int	random = std::rand() % 3;
	if (random == 0)
		return (new A);
	else if (random == 1)
		return (new B);
	else
		return (new C);
}

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "unknown" << std::endl;
}

void	identify(Base& p)
{
	try {
		(void)dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		return ;
	} catch (const std::exception& e) {};
	try {
		(void)dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		return ;
	} catch (const std::exception& e) {};
	try {
		(void)dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		return ;
	} catch (const std::exception& e) {};
	std::cout << "unknown" << std::endl;
}


int main(void)
{
	for (int x = 0; x < 7; x++)
	{
		std::cout << "------" << std::endl;
		Base *b = generate();
		std::cout << "ptr: "; identify(b);
		std::cout << "ref: "; identify(*b);
		delete b;
	}
}
