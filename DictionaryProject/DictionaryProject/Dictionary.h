#ifndef DICTIONARY_H
#define DICTIONARY_H

#include <string>
#include <map>

class Dictionary
{
public:
	bool addDefinition(const std::string & word, const std::string & definition) noexcept;
	std::string getDefinition(const std::string & word) const noexcept;
	void printAll() const noexcept;

private:
	std::map<std::string, std::string> dictionary;
	std::string toUpper(const std::string & str) const noexcept;
};

#endif