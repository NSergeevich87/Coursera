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

bool Apple::isOrganic() const
{
	return Organic;
}