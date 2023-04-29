#ifndef ARRAY_H
#define ARRAY_H

#include <exception>
#include <stddef.h>

template<typename T>
class Array
{
public:
	Array();
	Array(unsigned int len);
	Array(const Array& c);
	~Array();

	Array&	operator = (const Array& c);
	T& 		operator[] (size_t index) const; 

	unsigned int	size() const;

	class OutOfBoundsException: public std::exception
	{
	public:
		const char*	what(void) const throw ();
	};
private:
	T*				_array;
	unsigned int	_len;
};

#include "Array.tpp"

#endif