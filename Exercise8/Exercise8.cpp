// Copyright NSergeevich. All Rights Reserved.

#include <iostream>
#include <vector>
#include <string>

bool Shorter(std::string FirstString, std::string SecondString);
bool Longer(std::string FirstString, std::string SecondString);
std::string FindExtreme(std::vector<std::string>& Values, bool (*Compare)(std::string, std::string));

int main()
{
	std::cout << std::boolalpha;

	std::vector<std::string> Strings{};
	std::string String1{};
	std::string String2{};

	std::cout << "Enter first string: ";
	std::getline(std::cin, String1);
	std::cout << "Enter second string: ";
	std::getline(std::cin, String2);

	std::cout << "Shorter string1: " << Shorter(String1, String2) << "\n";
	std::cout << "Longer string1: " << Longer(String1, String2) << "\n";

	Strings.push_back(String1);
	Strings.push_back(String2);

	std::string MaxString = FindExtreme(Strings, &Longer);
	std::string MinString = FindExtreme(Strings, &Shorter);

	std::cout << "Shorter string: " << MinString << "\n";
	std::cout << "Longer string: " << MaxString << "\n";

	return 0;
}

bool Shorter(std::string FirstString, std::string SecondString)
{
	return FirstString.size() < SecondString.size();
}

bool Longer(std::string FirstString, std::string SecondString)
{
	return FirstString.size() > SecondString.size();
}

std::string FindExtreme(std::vector<std::string>& Values, bool(*Compare)(std::string, std::string))
{
	std::string ExtremeString = Values[0];

	for (size_t i = 1; i < Values.size(); i++)
	{
		if (Compare(Values[i], ExtremeString))
		{
			ExtremeString = Values[i];
		}
	}

	return ExtremeString;
}
