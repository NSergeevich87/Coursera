// Copyright NSergeevich. All Rights Reserved.

#include <iostream>

/**
 * Show your name
 * @return your name
*/
int main()
{
	std::string name{};
	std::string other_name{};
	std::cout << "Enter your name: ";
	std::cin >> name;
	std::cout << "Your name is: " << name << std::endl;
	std::cout << "Enter your friend or enemy: ";
	std::cin >> other_name;
	std::cout << other_name << "\n";

	return 0;
}
