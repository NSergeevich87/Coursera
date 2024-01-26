// Exercise8_ForLoops.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	/*int num{};
	std::cout << "Enter a num: ";
	std::cin >> num;

	for (int i = 1; i <= num; i++)
	{
		if (i %2 == 0)
		{
			std::cout << i << " ";
		}
	}
	std::cout << "\n";

	int RawLength{};
	std::cout << "Enter raw length: ";
	std::cin >> RawLength;

	for (size_t i = 0; i < RawLength; i++)
	{
		std::cout << "*";
	}
	std::cout << "\n";

	int NumRaw{};
	std::cout << "Enter raw length: ";
	std::cin >> RawLength;
	std::cout << "Enter num's of raw: ";
	std::cin >> NumRaw;

	for (size_t i = 0; i < NumRaw; i++)
	{
		for (size_t j = 0; j < RawLength; j++)
		{
			std::cout << "*";
		}
		std::cout << "\n";
	}
	std::cout << "\n";

	std::cout << "Enter num's of raw: ";
	std::cin >> NumRaw;

	for (size_t i = 0; i < NumRaw; i++)
	{
		for (size_t j = 0; j <= i; j++)
		{
			std::cout << "*";
		}
		std::cout << "\n";
	}
	std::cout << "\n";*/

	int n{};
	int max_n = std::numeric_limits<int>::min();
	bool InputProvided = false;

	while (n != -1)
	{
		std::cout << "Enter num: ";
		std::cin >> n;
		
		if (n != -1)
		{
			InputProvided = true;
		}

		if (n > max_n)
		{
			max_n = n;
		}
	}

	if (InputProvided)
	{
		std::cout << "Max number provided: " << max_n << "\n";
	}
	else
	{
		std::cout << "No inputs other than -1 provided.\n";
	}

	return 0;
}