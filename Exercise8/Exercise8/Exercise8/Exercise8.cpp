// Copyright A.T. Chamillard. All Rights Reserved.

#include "Die.h"
#include "Random.h"

#include <iostream>

using namespace exercise8;

/**
 * Exercise 8 Solution
 * @return exit status
*/
int main()
{
    // initialize random number generator
    Random::Initialize();

    // create two dice
    Die Die1(6);
    Die Die2(20);

    // tell the dice to roll themselves
    Die1.Roll();
    Die2.Roll();

    // print the top sides and the sum of the dice
    std::cout << "Die1: " << Die1.GetTopSide() << "\n";
    std::cout << "Die2: " << Die2.GetTopSide() << "\n";
    std::cout << "Summ: " << Die1.GetTopSide() + Die2.GetTopSide() << "\n";

}
