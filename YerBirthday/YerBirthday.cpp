// YerBirthday.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

string MesAsk(map<int, string> months);
int DayAsk(map<int, string> months, string month);
void Reminder(map<int, string> months, string month, int day);

int main()
{
	map<int, string> Months{
		{12, "december"},
		{1, "january"},
		{2, "february"},
		{3, "march"},
		{4, "april"},
		{5, "may"},
		{6, "june"},
		{7, "july"},
		{8, "august"},
		{9, "september"},
		{10, "october"},
		{11, "november"}
	};

	string Month{ MesAsk(Months) };
	int Day{ DayAsk(Months, Month) };

	cout << "Your birth date: " << Day << "th of " << Month << "\n";

	Reminder(Months, Month, Day);

	return 0;
}

string MesAsk(map<int, string> months)
{
	string text{};
	bool bChecked{ false };

	while (!bChecked)
	{
		cout << "Enter month of birthday: ";
		cin >> text;
	
		for (size_t i = 0; i < text.size(); i++)
		{
			text[i] = tolower(text[i]);
		}

		for (auto item : months)
		{
			if (item.second == text)
			{
				bChecked = true;
			}
		}

		if (!bChecked)
		{
			cout << "Enter correct name of the month!" << "\n";
			for (auto item : months)
			{
				cout << item.second << " ";
			}
			cout << endl;
		}
	}

	return text;
}
int DayAsk(map<int, string> months, string month)
{
	int Day{};
	bool TrueAnswer{ false };

	if (month == "december" || month == "january")
	{
		while (!TrueAnswer)
		{
			cout << "Enter the day of birth(1 - 31): ";
			cin >> Day;
			if (Day >= 1 && Day <= 31)
			{
				TrueAnswer = true;
			}
		}
	}
	else if (month == "february")
	{
		while (!TrueAnswer)
		{
			cout << "Enter the day of birth(1 - 28): ";
			cin >> Day;
			if (Day >= 1 && Day <= 28)
			{
				TrueAnswer = true;
			}
		}
	}
	else
	{
		while (!TrueAnswer)
		{
			cout << "Enter the day of birth(1 - 30): ";
			cin >> Day;
			if (Day >= 1 && Day <= 30)
			{
				TrueAnswer = true;
			}
		}
	}

	return Day;
}

void Reminder(map<int, string> months, string month, int day)
{
	map<string, int> DaysInMonth{
		{"december", 31},
		{"january", 31},
		{"february", 28},
		{"march", 30},
		{"april", 30},
		{"may", 30},
		{"june", 30},
		{"july", 30},
		{"august", 30},
		{"september", 30},
		{"october", 30},
		{"november", 30}
	};
	int key{};
	string key2{};

	if (day == 1)
	{
		for (auto item : months)
		{
			if (item.second == month)
			{
				key = item.first - 1;
			}
		}

		cout << "Date: " << DaysInMonth[months[key]] << "th of " << months[key] << "\n";
	}
	else
	{
		cout << "Date: " << day << "th of " << month << "\n";
	}

	cout << "For you birthday: " << day << "th of " << month
	   	<< " we should inviting you to visit an in - game store with 20 % off" << "\n";
}

/**
December – 31
January – 31
February – 28
March – 30
April – 30
May – 30
June – 30
July – 30
August – 30
September – 30 
October – 30
November – 30
*/