#include <string>
#include <iostream>
#include <fstream>

std::string ft_replace(std::string text, const std::string find, const std::string replace)
{
	size_t	erase_length = find.length();
	size_t	replace_length = replace.length();
	size_t	pos_find = 0;

	pos_find = text.find(find);
	while (pos_find != std::string::npos)
	{
		text.erase(pos_find, erase_length);
		text.insert(pos_find, replace);
		pos_find = text.find(find, pos_find + replace_length);
	}
	return (text);
}


int main(int argc, char *argv[])
{
    if (argc != 4 || argv[1][0] == '\0' || argv[2][0] == '\0')
        return 1;
    
    std::string filename = argv[1];
    char *find = argv[2];
    char *replace = argv[3];
    std::string str;
    std::fstream read;
    std::fstream write;
    
    read.open(argv[1], std::fstream::in | std::fstream::out | std::fstream::app);    
    if (!read.is_open())
        return 1;
    
    write.open((filename+".replace").c_str(), std::fstream::in | std::fstream::out | std::fstream::trunc);
    if (!read.is_open())
    {
        read.close();
        return 1;
    }
    while (std::getline(read, str))
		write << ft_replace(str, find, replace) << '\n';
    write.close();
    read.close();
}