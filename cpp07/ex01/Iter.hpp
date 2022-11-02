#pragma once
#include <cctype>
#include <iostream>

template<typename T>
void iter(T *arr, size_t length, void (*f)(T const &elt))
{
	for (size_t i = 0; i < length; i++)
		(*f)(arr[i]);
}

template<typename T>
void display(T const &value)
{
	std::cout << value << " ";
}