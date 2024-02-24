// Copyright A.T. Chamillard. All Rights Reserved.

#include "Digitizer.h"
#include <string>
#include <cctype>
#include <iostream>

/**
 * Constructor
*/
Digitizer::Digitizer()
{
	// populate your map here
	// zero one two three four five six seven eight nine ten
	ToDigit.insert(std::make_pair<std::string, int>("zero", 0));
	ToDigit.insert(std::make_pair<std::string, int>("one", 1));
	ToDigit.insert(std::make_pair<std::string, int>("two", 2));
	ToDigit.insert(std::make_pair<std::string, int>("three", 3));
	ToDigit.insert(std::make_pair<std::string, int>("four", 4));
	ToDigit.insert(std::make_pair<std::string, int>("five", 5));
	ToDigit.insert(std::make_pair<std::string, int>("six", 6));
	ToDigit.insert(std::make_pair<std::string, int>("seven", 7));
	ToDigit.insert(std::make_pair<std::string, int>("eight", 8));
	ToDigit.insert(std::make_pair<std::string, int>("nine", 9));
}

/**
 * Converts the given word to the corresponding digit.
 * If the word isn't a valid digit name, returns -1
 * @param Word word to convert
 * @return corresponding digit or -1
*/
int Digitizer::ConvertWordToDigit(std::string Word)
{
	// convert to lower case 
	// DO NOT use std::transform, which works fine in Visual
	// Studio and in Xcode, but doesn't work in g++ in the autograder
	// Instead, use a for loop to convert each character to
	// lower or upper case (depending on the case you used
	// in your map
	std::string Temp{};
	for (auto item : Word)
	{
		Temp += tolower(item);
	}

	for (auto item : ToDigit)
	{
		if (Temp == item.first)
		{
			return item.second;
		}
	}
	// do the conversion
	// replace the code below with your code
	return -1;
}