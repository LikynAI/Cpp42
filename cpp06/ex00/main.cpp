#include <iostream>
#include <string>

int main(int argc, char **argv)
{
    if (argc != 2)
        return 0;
    float input = std::atof(argv[1]);
    if (input == 0 && argv[1][0] != '0')
    {
        std::cout << "invalid argument\n";
        return 0;
    }

    char c = static_cast<unsigned int>(input);
    int i = static_cast<int>(input);
    float f = static_cast<float>(input);
    double d = static_cast<double>(input);

    std::cout << "char:   ";
    if (c < 32 || !std::strcmp(argv[1], "nan") || std::strstr(argv[1], "inf"))
        std::cout << "non representable" << '\n';
    else
        std::cout << static_cast<char>(input) << '\n';


    std::cout << "int:    ";
    if (std::strcmp(argv[1], "nan") && !std::strstr(argv[1], "inf"))
        std::cout << i << '\n';
    else
        std::cout << "imposible" << '\n';
    

    std::cout << "float:  ";
    if (f - i != 0)
        std::cout << f << "f\n";
    else
        std::cout << f << ".0f\n";
    

    std::cout << "double: ";
    if (d - i != 0)
        std::cout << d << '\n';
    else
        std::cout << d << ".0\n";
}
