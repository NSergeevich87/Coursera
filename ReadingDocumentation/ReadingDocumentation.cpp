// Copyright NSergeevich. All Rights Reserved.
#define _USE_MATH_DEFINES

#include <iostream>

using namespace std;

int main()
{
	cout << fixed;

	float Angle{ 45 };

	float Cosine = cosf(Angle);

	cout << "Cosine of 45 is: " << Cosine << "\n";

	// convert to radians:

	float Radians = Angle * M_PI / 180;

	cout << "45 degrees is: " << Radians << " radians" << "\n";

	Radians = cosf(Radians);

	cout << "Cosine of 45 radians is: " << Radians << "\n";

	cout << "Pi: " << M_PI << "\n";

	return 0;
}