// Copyright NSergeevich. All rights reserved.

#include <iostream>
#include <string>

int main()
{
	std::string ScoreString{};
	int Score{};
	
	std::cout << "Enter: ";
	std::cin >> ScoreString;

	try
	{
		Score = std::stoi(ScoreString);
		std::cout << "Score: " << Score << "\n";
	}
	catch (const std::invalid_argument&)
	{
		std::cout << "Non integer value!" << "\n";
	}
	catch (const std::out_of_range&)
	{
		std::cout << "Out of range exeption!" << "\n";
	}
	

	return 0;
}