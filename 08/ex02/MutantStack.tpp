#include "MutantStack.hpp"

template<typename T>
MutantStack<T>::MutantStack():
	std::stack<T>()
{}

template<typename T>
MutantStack<T>::~MutantStack() {}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack& c):
	std::stack<T>(c)
{
	*this = c;
}

template<typename T>
MutantStack<T>& MutantStack<T>::operator = (const MutantStack& c)
{
	(void)c;
	return (*this);
}

template<typename T>
typename std::stack<T>::container_type::iterator MutantStack<T>::begin()
{
	return std::stack<T>::c.begin();
}

template<typename T>
typename std::stack<T>::container_type::iterator MutantStack<T>::end()
{
	return std::stack<T>::c.end();
}

template<typename T>
typename std::stack<T>::container_type::const_iterator MutantStack<T>::begin() const
{
	return std::stack<T>::c.begin();
}

template<typename T>
typename std::stack<T>::container_type::const_iterator MutantStack<T>::end() const
{
	return std::stack<T>::c.end();
}

template<typename T>
typename std::stack<T>::container_type::reverse_iterator MutantStack<T>::rbegin()
{
	return std::stack<T>::c.rbegin();
}

template<typename T>
typename std::stack<T>::container_type::reverse_iterator MutantStack<T>::rend()
{
	return std::stack<T>::c.rend();
}

template<typename T>
typename std::stack<T>::container_type::const_reverse_iterator MutantStack<T>::rbegin() const
{
	return std::stack<T>::c.rbegin();
}

template<typename T>
typename std::stack<T>::container_type::const_reverse_iterator MutantStack<T>::rend() const
{
	return std::stack<T>::c.rend();
}
