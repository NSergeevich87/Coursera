// AClassyApple.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Apple.h"
#include "Die.h"

using namespace std;

int main()
{
	cout << boolalpha;

	/*Apple Apple_Gold{true, 5};

	Apple_Gold.TakeBite(0.25f);
	Apple_Gold.TakeBite(0.8f);

	Die TestDie6{};
	cout << "Num sides: " << TestDie6.GetNumSides() << "\n";
	cout << "Top sides: " << TestDie6.GetTopSide() << "\n";

	

	Apple Apple2{false};
	cout << Apple2.isOrganic() << " " << Apple2.GetAmountLeft() << "\n";*/

	Die Die20{ 20 };
	cout << "Num sides: " << Die20.GetNumSides() << "\n";
	cout << "Top sides: " << Die20.GetTopSide() << "\n";
	Die20.Roll();
	cout << "Top Side: " << Die20.GetTopSide() << "\n";
	Die20.Roll();
	cout << "Top Side: " << Die20.GetTopSide() << "\n";

	Apple Apple_1;
	cout << Apple_1.GetAmountLeft() << "\n";
	
	while (Apple_1.GetAmountLeft() > 0)
	{
		Apple_1.TakeBite(0.1);
	}

	return 0;
}