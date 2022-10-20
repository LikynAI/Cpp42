#include "PhoneBook.hpp"

std::string cut(std::string str)
{
    if (str.length() > 10)
    {
        str.resize(10);
        str[9] = '.';
    }
    return str;
}

void Search(PhoneBook *pb)
{
    int id;
    if (pb->get_list()[0].get_first_name() == "")
    {
        std::cout << "book is empty";
        return ;
    }

    for (size_t i = 0; i < 8 && pb->get_list()[i].get_first_name() != ""; i++)
    {
        std::cout << std::right << i + 1 << "|";
        std::cout << std::right << std::setw(10) << cut(pb->get_list()[i].get_first_name()) << "|";
        std::cout << std::right << std::setw(10) << cut(pb->get_list()[i].get_last_name()) << "|";
        std::cout << std::right << std::setw(10) << cut(pb->get_list()[i].get_nickname()) << '\n';
    }

    std::cout << "Enter contact id\n";
    char c_id;
    while ((std::cin >> c_id))
    {
        std::cin.clear();
        id = c_id - '0';
        if(id < 1 || id > 8)
            std::cout << "id is a number from 1 to 8\n";
        else if (pb->get_list()[id-1].get_first_name() == "")
            std::cout << "no contact with such id\n";
        else
            break;
    }
    std::cout << std::right << id << "|";
    std::cout << std::right << cut(pb->get_list()[id-1].get_first_name()) << "|";
    std::cout << std::right << cut(pb->get_list()[id-1].get_last_name()) << "|";
    std::cout << std::right << cut(pb->get_list()[id-1].get_nickname()) << "|"; 
    std::cout << std::right << cut(pb->get_list()[id-1].get_phone_number()) << "|";
    std::cout << std::right << cut(pb->get_list()[id-1].get_nickname()) << '\n';
}

void Add(PhoneBook *pb)
{
    const std::string fields_names[5] = {"first_name", "last_name", "nickname","phone_number","darkest_secret"};
    std::string fields[5];
    for (int i = 0; i < 5; i++)
    {
        while (true)
        {
            std::cout << "Enter " << fields_names[i] << "\n";
            std::cin >> fields[i];
            if (fields[i].length() > 0)
                break;
            else 
                std::cout << "can not be empty\n";
        }
    }
    pb->Add(Contact(fields[0], fields[1], fields[2], fields[3], fields[4]));
}

int main()
{
    PhoneBook pb = PhoneBook();
    while (true)
    {
        std::string command;
        std::cout << "Enter command\n";
        std::cin >> command;
        if (command == "ADD")
        {
            Add(&pb);
        }
        else if (command == "SEARCH")
        {
            Search(&pb);
        }
        else if (command == "EXIT")
        {
            break;
        }
    }
    return 0;
}