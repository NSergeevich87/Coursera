// YouTheConverter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

void StringToInt();
void ComaSeparator();

int main()
{
	//StringToInt();
	ComaSeparator();

	return 0;
}

void StringToInt()
{
	string text{};
	string justNum{};

	cout << "Enter: ";
	cin >> text;

	for (size_t i = 0; i < text.size(); i++)
	{
		if (isdigit(text[i]))
		{
			justNum += text[i];
		}
	}

	int num = stoi(justNum);

	cout << num << "\n";
}

void ComaSeparator()
{
	string text{};
	int ComaLocation{};
	float Longitude{};
	float Latitude{};

	cout << "Enter: ";
	cin >> text;

	ComaLocation = text.find(',');
	Longitude = stof(text.substr(0, ComaLocation));
	Latitude = stof(text.substr(ComaLocation + 1));

	cout << Longitude << " " << Latitude << "\n";
}
