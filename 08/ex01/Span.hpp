#ifndef SPAN_H
#define SPAN_H

#include <exception>
#include <vector>

class Span
{
private:
	Span();
public:
	Span(unsigned int n);
	~Span();
	Span(const Span& c);
	
	Span& operator = (const Span& c);

	void	addNumber(int n);
	int		shortestSpan() const;
	int		longestSpan() const;

	class MaxElementsReachedException: public std::exception
	{
	public:
		const char* what(void) const throw();
	};
	class ImpossibleSpanException: public std::exception
	{
	public:
		const char* what(void) const throw();
	};
private:
	unsigned int		_max;
	std::vector<int>	_vec;
};

#endif