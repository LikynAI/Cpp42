#include <string>
#include <iostream>
#include <fstream>

int main()
{
    std::string filename;
    std::string str;
    std::string find;
    std::string replace;

    std::cin >> filename >> find >> replace;

    std::fstream read;
    std::fstream write;
    read.open(filename, std::fstream::in | std::fstream::out | std::fstream::app);
    write.open(filename+".replace", std::fstream::in | std::fstream::out | std::fstream::app);
    
    while (read >> str)
    {
        std::cout << str;
        if (str == find)
            write << replace;
        else write << str;
    }
    write.close();
    read.close();
}