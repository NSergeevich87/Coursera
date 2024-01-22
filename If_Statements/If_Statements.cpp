// If_Statements.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	/**
	One for the money if the user enters 1

	Two for the show if the user enters 2

	Three to get ready if the user enters 3

	Now go, cat, go if the user enters 4

	Invalid if the user enters an invalid choice
	*/

	int num{};
	cout << "Enter num: ";
	cin >> num;

	switch (num)
	{
	case 1:
		cout << "One for the money" << "\n";
		break;
	case 2:
		cout << "Two for the show" << "\n";
		break;
	case 3:
		cout << "Three to get ready" << "\n";
		break;
	case 4:
		cout << "Now go, cat, go" << "\n";
		break;
	default:
		cout << "Invalid choice" << "\n";
		break;
	}

	/*int num{};
	cout << "Enter a number: ";
	cin >> num;

	if (num == 1)
	{
		cout << "One for the money" << "\n";
	}
	else if (num == 2)
	{
		cout << "Two for the show" << "\n";
	}
	else if (num == 3)
	{
		cout << "Three to get ready" << "\n";
	}
	else if (num == 4)
	{
		cout << "Now go, cat, go" << "\n";
	}
	else
	{
		cout << "Invalid choice" << "\n";
	}*/

	return 0;
}