// Don'tLeaveMeDangling.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	/*float* Num{ new float {} };
	std::cout << *Num << "\n";

	*Num = 1987.45f;
	std::cout << *Num << "\n";

	delete Num;
	Num = nullptr;
	std::cout << *Num << "\n";*/

	std::shared_ptr<float> ptr1{ new float };
	std::shared_ptr<float> ptr2{ nullptr };

	std::cout << std::hex << *ptr1 << "\n";
	//std::cout << std::hex << *ptr2 << "\n";

	ptr2 = ptr1;
	std::cout << std::hex << *ptr1 << "\n";
	std::cout << std::hex << *ptr2 << "\n";

	*ptr1 = 19.87;
	std::cout << *ptr2 << "\n";

	return 0;
}