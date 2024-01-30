#pragma once

#include <iostream>
#include <string>

class Apple
{
private:
	float AmountLeft{ 1.f };
	bool Organic{ true };

public:
	Apple();

	Apple(bool isOrganic);

	Apple(bool isOrganic, float Size);

	bool isOrganic() const;
	float GetAmountLeft() const;

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

