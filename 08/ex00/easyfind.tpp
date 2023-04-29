#include "easyfind.hpp"

const char* NoSuchElementException::what(void) const throw()
{
	return "No such element exists";
}

template<typename T>
typename T::iterator easyfind(T container, int find)
{
	typename T::iterator ret = std::find(container.begin(), container.end(), find);
	if (ret == container.end())
		throw NoSuchElementException();
	return (ret);
}
