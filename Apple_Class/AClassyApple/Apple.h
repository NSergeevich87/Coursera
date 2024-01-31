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

	void TakeBite(float Size);
};

