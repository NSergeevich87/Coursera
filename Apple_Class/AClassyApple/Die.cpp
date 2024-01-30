#include "Die.h"
#include "Random.h"

/**
 * Constructor for a six-sided
*/
Die::Die() : 
    NumSides{ 6 }
{
}

/**
 * Constructor for a die with the given nums of sides
 * @param NumSides  number of sides
*/
Die::Die(int NumSides) : NumSides{ NumSides }
{
}

/**
* Gets the number of sides
* @return number of sides
*/
int Die::GetNumSides() const
{
    return NumSides;
}

/**
* Gets the side that's on top
* @return top side
*/
int Die::GetTopSide() const
{
    return TopSide;
}

void Die::Roll()
{
    TopSide = Random::Next(NumSides) + 1;
}
