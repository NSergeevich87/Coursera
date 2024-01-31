#include "Apple.h"

Apple::Apple()
{
}

Apple::Apple(bool isOrganic) :
	Organic{ isOrganic }
{
}

Apple::Apple(bool isOrganic, float Size) :
	Organic{ isOrganic }, AmountLeft{ Size }
{
}

float Apple::GetAmountLeft() const
{
	return AmountLeft;
}

void Apple::TakeBite(float Size)
{
	if (Size <= AmountLeft)
	{
		AmountLeft -= Size;
		std::cout << "Apple left: " << AmountLeft << "\n";
	}
	else
	{
		AmountLeft = 0;
		std::cout << "Applt left less than bite" << "\n";
	}
}

bool Apple::isOrganic() const
{
	return Organic;
}