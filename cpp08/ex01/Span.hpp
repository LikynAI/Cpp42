#pragma once
#include <cctype>
#include <exception>
#include <algorithm>

template<typename T>
class Span
{
private:
    size_t n;
    T *arr;
    Span();
public:
    Span(size_t n)
    {
        this->n = n;
        this->arr = new T[n];
    }
    
    Span(Span<T> &src)
    {
        *this = src;
    }
  
    class OutOfBoundsException: public std::exception {
        const char* what() const throw() {
	        return "OutOfBoundsException";
        }
	};

    Span &operator=(Span &src)
    {
        n = src.n;
    }

	T &operator[](size_t index)
    {
        if (index < 0 || index >= n)
           throw OutOfBoundsException();
        return this->arr[index];
    }
    
	size_t size(void)
    {
        return  n;
    }

    int LongestSpan

    ~Span()
    {
        delete []arr;
    }
};
