// Copyright NSergeevich. All Rights Reserved.

#define _USE_MATH_DEFINES

#include <iostream>

/**
 * @brief Convertion an angle in cos and sin (angle in radians)
 * @return 
*/
int main()
{
	float Angle{};
	std::cout << "Enter some angle: ";
	std::cin >> Angle;
	std::cout << "Your angle is: " << Angle << "\n"
			  << "Calculating Sin and Cos......" << "\n";

	float ToRad = M_PI / 180;
	// convertion Angle to Radians
	float Radians = Angle * ToRad;
	std::cout << Angle << " degrees is " << Radians << " in radians" << "\n";
	// calculate sin and cos
	float Cosine = cosf(Angle);
	float Sinus = sinf(Angle);

	std::cout << "Cosine of " << Radians << " is: " << Cosine << "\n"
		      << "Sinus of " << Radians << " is: " << Sinus << "\n";

	return 0;
}