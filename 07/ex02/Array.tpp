#include "Array.hpp"

template<typename T>
Array<T>::Array()
{
	this->_array = new T[0];
	this->_len = 0;
}

template<typename T>
Array<T>::Array(unsigned int len)
{
	this->_array = new T[len];
	this->_len = len;
	
	for (unsigned int i = 0; i < len; i++)
	{
		this->_array[i] = T();
	}
}

template<typename T>
Array<T>::Array(const Array& c)
{
	this->_array = nullptr;
	*this = c;
}

template<typename T>
Array<T>::~Array()
{
	delete[] this->_array;
}

template<typename T>
Array<T>& Array<T>::operator = (const Array<T>& c)
{
	if (this->_array)
		delete[] this->_array;
	this->_len = c._len;
	this->_array = new T[this->_len];
	for (unsigned int i = 0; i < this->_len; i++)
		this->_array[i] = c[i];
	return (*this);
}

template<typename T>
T& Array<T>::operator [] (size_t index) const
{
    if (index >= this->_len)
		throw(OutOfBoundsException());
    return(this->_array[index]);
}

template<typename T>
unsigned int Array<T>::size() const
{
	return this->_len;
}

template<typename T>
const char* Array<T>::OutOfBoundsException::what(void) const throw()
{
	return "Index out of bounds";
}