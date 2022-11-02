#include <iostream>
#include <string>

void printc(char  *argv, float input)
{
    char c = static_cast<unsigned int>(input);
    std::cout << "char:   ";
    if (c < 32 || !std::strcmp(argv, "nan") || std::strstr(argv, "inf"))
        std::cout << "non representable" << '\n';
    else
        std::cout << static_cast<char>(input) << '\n';
}

void printi(char  *argv, float input)
{
    int i = static_cast<int>(input);
    long long ll = static_cast<long long>(input);
    std::cout << "int:    ";
    if (std::strcmp(argv, "nan") && !std::strstr(argv, "inf") && ll == i)
        std::cout << i << '\n';
    else
        std::cout << "imposible" << '\n';
}

void printf(float input)
{
    int i = static_cast<int>(input);
    float f = static_cast<float>(input);
    std::cout << "float:  ";
    if (f - i != 0)
        std::cout << f << "f\n";
    else
        std::cout << f << ".0f\n";
}

void printd(float input)
{
    int i = static_cast<int>(input);
    double d = static_cast<double>(input);
    std::cout << "double: ";
    if (d - i != 0)
        std::cout << d << '\n';
    else
        std::cout << d << ".0\n";
}

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "invalid argument\n";
        return 0;
    }

    float input = std::atof(argv[1]);
    if (input == 0 && argv[1][0] != '0')
    {
        std::cout << "invalid argument\n";
        return 0;
    }

    printc(argv[1], input);
    printi(argv[1], input);
    printf(input);
    printd(input);
}
