#pragma once

// Includes
#include <string>
#include <iostream>

class Brain
{
	private:
		std::string ideas[100];

	public:
		Brain();
		Brain(const Brain &copy);
		~Brain();
		Brain &operator=(const Brain &src);
		const std::string getIdea(size_t i)const;
		void setIdea(size_t i, std::string idea);
};