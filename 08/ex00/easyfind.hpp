#ifndef EASYFIND_H
#define EASYFIND_H

#include <exception>
#include <iterator>
#include <algorithm>

class NoSuchElementException : public std::exception
{
public:
	const char* what(void) const throw ();
};

template<typename T>
typename T::iterator easyfind(T container, int n);

#include "easyfind.tpp"

#endif