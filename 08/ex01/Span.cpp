#include "Span.hpp"

Span::Span() {};

Span::Span(unsigned int n) :
	_max(n)
{}

Span::~Span() {}

Span::Span(const Span& c)
{
	*this = c;
}

Span& Span::operator = (const Span& c)
{
	_max = c._max;
	_vec = c._vec;
	return (*this);
}

void Span::addNumber(int n)
{
	if (this->_vec.size() < _max)
		this->_vec.push_back(n);
	else
		throw MaxElementsReachedException();
}

int Span::shortestSpan() const
{
	if (this->_vec.size() <= 1)
		throw ImpossibleSpanException();

	std::vector<int> tmp = this->_vec;
	std::sort(tmp.begin(), tmp.end());

	int cur_dif = longestSpan();
	for (unsigned long i = 0; i < tmp.size() - 1; i++)
	{
		if (tmp[i + 1] - tmp[i] < cur_dif)
			cur_dif = tmp[i + 1] - tmp[i];
	}
	return (cur_dif);
}

int Span::longestSpan() const
{
	if (this->_vec.size() <= 1)
		throw ImpossibleSpanException();

	std::vector<int> tmp = this->_vec;
	std::sort(tmp.begin(), tmp.end());
	return (tmp.back() - tmp.at(0));
}

const char* Span::MaxElementsReachedException::what(void) const throw()
{
	return "Max elements reached";
}

const char* Span::ImpossibleSpanException::what(void) const throw()
{
	return "Unable to calculate span";
}
