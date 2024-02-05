// Exercise11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
	//15,M,true

	cout << boolalpha;

	string ComaLocation{};
	int PyramidSlotNumber{};
	char BlockLetter{};
	bool bShouldBeLit{};

	string text{};
	cout << "Enter <pyramid slot number>,<block letter>,<whether or not the block should be lit> : ";
	cin >> text;

	for (size_t i = 0; i < text.size(); i++)
	{
		if (text[i] == ',') 
		{
			ComaLocation += to_string(i);
		}
	}

	int ComaLocation1 = ComaLocation[0] - '0';
	int ComaLocation2 = ComaLocation[1] - '0';

	PyramidSlotNumber = stoi(text.substr(0, ComaLocation1));
	cout << "Pyramid slot number: " << PyramidSlotNumber << "\n";

	BlockLetter = text[ComaLocation2 - ComaLocation1 + 1];
	cout << "Block letter: " << BlockLetter << "\n";

	string BSL{};
	for (int i = ComaLocation2 + 1; i < text.size(); i++)
	{
		BSL += text[i];
	}

	if (BSL == "true")
	{
		bShouldBeLit = true;
	}
	else bShouldBeLit = false;

	cout << "Whether or not the block should be lit: " << bShouldBeLit << "\n";

	return 0;
}