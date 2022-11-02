#include <iostream>
#include <string>

typedef struct s_Data
{
    int x;
    int y;
} Data;

uintptr_t serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data*>(raw);
}

int main()
{
    Data d = {10, 10};

    Data *d_ptr = &d;
    std::cout << d_ptr << '\n';

    uintptr_t serialized = serialize(d_ptr);
    std::cout << serialized << '\n';

    Data *new_d_ptr = deserialize(serialized);
    std::cout << new_d_ptr << '\n';
    std::cout << new_d_ptr->x << new_d_ptr->y << '\n';
    return 0;
}