#pragma once

#include "Contact.hpp"
#include <iomanip>
#include <iostream>
#include <string>

class PhoneBook
{
private:
    Contact list[8];
public:
    PhoneBook(/* args */);
    ~PhoneBook();
    void Add(Contact c);
    Contact* get_list();
};
