#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void	Harl::insignificant(void)
{
	std::cout << "Complains about something insignificant\n";
}

void	Harl::debug(void)
{
	std::cout << "[DEBUG]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI really do!\n";
}

void	Harl::info(void)
{
	std::cout << "[INFO]\nI cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger!\nIf you did, I wouldn’t be asking for more!\n";
}

void	Harl::warning(void)
{
	std::cout << "[WARNING]\nI think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month.\n";
}

void	Harl::error(void)
{
	std::cout << "[ERROR]\nThis is unacceptable! I want to speak to the manager now.\n";
}

void	Harl::complain(std::string level)
{
	void    (Harl::*f[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error, &Harl::insignificant};
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;

	while (i < 4 && levels[i] != level)
		i++;
	
	switch (int(i < 4))
	{
	case 1:
		while (i < 4)
			(this->*f[i++])();
		break;
	default:
		(this->*f[i])();
	}
}
