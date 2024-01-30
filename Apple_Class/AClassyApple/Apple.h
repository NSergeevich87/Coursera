#pragma once

#include <iostream>
#include <string>

class Apple
{
private:
	float AmountLeft{ 1.f };
	bool Organic{ true };

public:
	Apple(bool isOrganic, float Size) : Organic{ isOrganic }, AmountLeft{ Size } {}

	bool isOrganic() const { return Organic; }
	float GetAmountLeft() const { return AmountLeft; }

	void TakeBite(float Size)
	{
		if (AmountLeft >= Size)
		{
			std::cout << "You try to bite: " << Size << " size\n";
			AmountLeft -= Size;
			std::cout << "Apple size left: " << GetAmountLeft() << "\n";
		}
		else
		{
			std::cout << "You try to bite: " << Size << " size\n";
			std::cout << "Apple size left: " << GetAmountLeft() << "\n";
			std::cout << "You try to bite more than left of size the apple!\n";
		}
	}
};

