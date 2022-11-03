#pragma once
#include <cctype>
#include <exception>
#include <algorithm>
#include <vector>
#include <iostream>

class Span
{
private:
    size_t count;
    size_t size;
    std::vector<int> arr;
    Span();
public:
    Span(size_t size)
    {
        this->size = size;
        this->arr = std::vector<int>(size);
        count = 0;
    }
    
    Span(Span &src)
    {
        *this = src;
    }
  
    class OutOfBoundsException: public std::exception {
        const char* what() const throw() {
	        return "Index Is Out Of Bounds";
        }
	};
    class SpanCantBeFound: public std::exception {
        const char* what() const throw() {
	        return "Span Cant Be Found";
        }
	};

    Span &operator=(Span &src)
    {
        size = src.size;
        count = src.count;
        arr = src.arr;
        return *this;
    }

	int &operator[](size_t index)
    {
        if (index < 0 || index >= size)
           throw OutOfBoundsException();
        return this->arr[index];
    }
    
    void addNumber(int a)
    {
        if (count == size)
           throw OutOfBoundsException();
        arr[count] = a;
        count++;
    }

    void addRange(int *begin, int *end)
    {
        if (count + ((end - begin)) > size)
           throw OutOfBoundsException();
        arr.insert(arr.begin()+count, begin, end);
    }

    size_t longestSpan()
    {
        if (count <= 1)
            throw SpanCantBeFound();
        std::vector<int> sorted = arr;
        sort(sorted.begin(),sorted.begin() + count);
        return sorted[count-1] - sorted[count]; 
    }

    size_t shortestSpan()
    {
        size_t m = SIZE_MAX;
        std::vector<int> sorted = arr;
        sort(sorted.begin(),sorted.begin() + count);
         
        for (size_t i = 0; i < count - 1; i++)
            if (m > (size_t)(sorted[i+1]-sorted[i]))
                m = sorted[i+1]-sorted[i];
        return m;
    }

    ~Span()
    {}
};
