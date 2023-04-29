#include <iostream>
#include <string>
#include <vector>
#include "Span.hpp"

int main(void)
{
	Span sp = Span(200);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	sp.fillSpan(195);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	return 0;
}
