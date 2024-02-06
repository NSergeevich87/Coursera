// Don'tLeaveMeDangling.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	float* Num{ new float {} };
	std::cout << *Num << "\n";

	*Num = 1987.45f;
	std::cout << *Num << "\n";

	delete Num;
	Num = nullptr;
	std::cout << *Num << "\n";

	return 0;
}