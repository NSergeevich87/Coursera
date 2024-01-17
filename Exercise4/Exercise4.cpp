// Copyright NSergeevich. All Rights Reserved.

#include <iostream>

int main()
{
	int FirstAltitud{};
	int SecondAltitud{};

	std::cout << "Enter first altitud: ";
	std::cin >> FirstAltitud;
	std::cout << "Enter second altitud: ";
	std::cin >> SecondAltitud;
	std::cout << "Altitud will be change: " << FirstAltitud - SecondAltitud << std::endl;
}