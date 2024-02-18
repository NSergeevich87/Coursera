// Exercise9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <map>
#include <string>

int main()
{
	std::map<std::string, std::string> PhoneBook{};
	PhoneBook.insert(std::make_pair<std::string, std::string>("Nikita", "+34 672 207 175"));
	PhoneBook["Kseniia"] = "+34 627 576 184";

	std::string Name{};
	std::cout << "Enter name: ";
	std::cin >> Name;

	if (PhoneBook.count(Name) == 1)
	{
		std::cout << Name << " -> " << PhoneBook[Name] << "\n";
	}
	else
	{
		std::cout << "This name -> " << Name << ", not founded!\n";
	}

	return 0;
}