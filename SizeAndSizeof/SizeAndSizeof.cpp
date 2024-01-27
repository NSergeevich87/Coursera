// SizeAndSizeof.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	int Array[10]{};

	for (int i = 0; i < size(Array); i++)
	{
		cout << &Array[i] << " ";
	}

	cout << "\n";
	cout << size(Array) << endl;
	cout << "\n";

	cout << sizeof(Array) << "\n";
	cout << sizeof(Array[0]) << "\n";
	cout << sizeof(Array) / sizeof(Array[0]) << endl;

	return 0;
}