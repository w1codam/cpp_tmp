#ifndef ITER_H
#define ITER_H

#include <stddef.h>

template<typename T>
void iter(T* arr, size_t len, void (*func)(T&))
{
	for (size_t i = 0; i < len; i++)
		(*func)(arr[i]);
}

#endif