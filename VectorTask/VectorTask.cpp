// VectorTask.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void VectorPrint(vector<int>& vec)
{
	cout << "[ ";
	for (size_t i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << " ";
	}
	cout << "]\n";
}

vector<int> VectorMake()
{
	vector<int> Nums{};
	int Size{};
	int Score{};

	cout << "How many scores you want to enter?: ";
	cin >> Size;

	while (Size <= 0)
	{
		cout << "You should enter number > 0: ";
		cin >> Size;
	}

	cout << "Enter a score (0-100): ";
	for (size_t i = 0; i < Size; i++)
	{
		cin >> Score;
		while (Score < 0 || Score > 100)
		{
			cout << "Enter a valid score (0-100): ";
			cin >> Score;
		}
		Nums.push_back(Score);
	}

	return Nums;
}

int VectorMin(vector<int>& vec)
{
	auto it = min_element(vec.begin(), vec.end());
	if (it != vec.end()) return *it;
}

int VectorMax(vector<int>& vec)
{
	vector<int>::iterator it = max_element(vec.begin(), vec.end());
	if (it != vec.end()) return *it;
}

int main()
{
	vector<int> Scores = VectorMake();
	VectorPrint(Scores);

	cout << "Min: " << VectorMin(Scores) << "\n";
	cout << "Max: " << VectorMax(Scores) << "\n";

	return 0;
}