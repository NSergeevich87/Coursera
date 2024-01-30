// AClassyApple.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Apple.h"
#include "Die.h"

using namespace std;

int main()
{
	Apple Apple_Gold(true, 1);

	Apple_Gold.TakeBite(0.25f);
	Apple_Gold.TakeBite(0.8f);

	Die TestDie6{};
	cout << "Num sides: " << TestDie6.GetNumSides() << "\n";
	cout << "Top sides: " << TestDie6.GetTopSide() << "\n";

	Die Die20{ 20 };
	cout << "Num sides: " << Die20.GetNumSides() << "\n";
	cout << "Top sides: " << Die20.GetTopSide() << "\n";

	return 0;
}