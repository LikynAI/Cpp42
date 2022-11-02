#pragma once
#include <cctype>
#include <exception>

template<typename T>
class Array
{
private:
    size_t n;
    T *arr;
    Array();
public:
    Array(size_t n)
    {
        this->n = n;
        this->arr = new T[n];
    }
    
    Array(Array<T> &src)
    {
        *this = src;
    }
  
    class OutOfBoundsException: public std::exception {
        const char* what() const throw() {
	        return "OutOfBoundsException";
        }
	};

    Array &operator=(Array &src)
    {
        n = src.n;
        memcpy(arr, src, n*(sizeof(T)));
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

    ~Array()
    {
        delete []arr;
    }
};
