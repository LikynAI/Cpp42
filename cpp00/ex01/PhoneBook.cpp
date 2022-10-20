#include "PhoneBook.hpp"

PhoneBook::~PhoneBook()
{
}

PhoneBook::PhoneBook()
{
    for (size_t i = 0; i < 8; i++)
        list[i] = Contact();
}

void PhoneBook::Add(Contact c)
{
    static unsigned int count = 0;
    list[count % 8] = c;  
    count = (count + 1) % 8;
}

Contact* PhoneBook::get_list()
{
    return list;
}
