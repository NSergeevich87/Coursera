// Copyright NSergeevich. All rights reserved.

#pragma once

/**
 * A Die
*/
class Die
{
private:
	int NumSides;
	int TopSide{ 1 };

public:
	/**
	 * Constructor for a six-sided
	*/
	Die();

	/**
	 * Constructor for a die with the given nums of sides
	 * @param NumSides  number of sides
	*/
	Die(int NumSides);

	/**
	 * Gets the number of sides
	 * @return number of sides
	*/
	int GetNumSides() const;

	/**
	 * Gets the side that's on top
	 * @return top side
	*/
	int GetTopSide() const;
};

