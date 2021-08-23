#include "Dictionary.h"
#include <iostream>
#include <string>

bool Dictionary::addDefinition(const std::string & word, const std::string & definition) noexcept
{
	std::string temp{ toUpper(word) };

	auto newWord{ dictionary.find(temp) };

	dictionary[temp] = definition;

	// Return false if we are updating the word,
	// return true if we added a new word.
	if (newWord != dictionary.end())
		return false;
	else
		return true;
}

std::string Dictionary::getDefinition(const std::string & word) const noexcept
{
	std::string temp{ toUpper(word) };

	auto it{ dictionary.find(temp) };

	if (it != dictionary.end())
		return it->second;
	else
		return "'" + temp + "' is not present in this dictionary.";
}

void Dictionary::printAll() const noexcept
{
	std::cout << "Dictionary Contents:" << std::endl << std::endl;

	for (const auto & elem : dictionary)
	{
		std::cout << elem.first << ": " << std::endl;
		std::cout << "\t" << elem.second << std::endl;

		std::cout << std::endl << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	}
}

std::string Dictionary::toUpper(const std::string & str) const noexcept
{
	std::string temp{ str };
	for (auto & c : temp)
		c = toupper(c);

	return temp;
}
