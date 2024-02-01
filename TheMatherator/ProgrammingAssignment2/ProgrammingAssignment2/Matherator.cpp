// Copyright A.T. Chamillard. All Rights Reserved.

#include <iostream>

#include "Matherator.h"

int Matherator::GetNthEvenNumber(int N)
{
	int counter{ 0 };
	int even{};

	if (N > 0)
	{
		while (counter != N)
		{
			counter++;
			even += 2;
		}
	}
	
	return even;
}

int Matherator::GetTenthEvenNumber()
{
	return GetNthEvenNumber(10);
}

void Matherator::PrintMToN(int M, int N)
{
	while (M <= N)
	{
		std::cout << M << " ";
		M++;
	}
	std::cout << "\n";
}

void Matherator::PrintOneToTen()
{
	PrintMToN(1, 10);
}
