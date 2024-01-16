// Copyright NSergeevich. All Rights Reserved.

#include <iostream>

using namespace std;

/**
 * Prints something
 * @return Exit status
*/
int main()
{
    int num{};

    std::cout << "Hello World!\n";
    cout << "Enter your favorite number: ";
    cin >> num;
    cout << "Your favorite number is: " << num << endl;

    return 0;
}
