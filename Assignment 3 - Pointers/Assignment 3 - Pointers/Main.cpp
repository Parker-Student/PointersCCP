
// Assignment 3 - Pointers
// <Your Name>


#include <iostream>
#include <conio.h>

using namespace std;

// TODO: Implement the "SwapIntegers" function


// Do not modify the main function!
int main()
{
	int first = 0;
	int second = 0;

	cout << "Enter the first integer: ";
	cin >> first;

	cout << "Enter the second integer: ";
	cin >> second;

	cout << "\nYou entered:\n";
	cout << "first: " << first << "\n";
	cout << "second: " << second << "\n";

	SwapIntegers(&first, &second);

	cout << "\nAfter swapping:\n";
	cout << "first: " << first << "\n";
	cout << "second: " << second << "\n";

	cout << "\nPress any key to quit.";

	_getch();
	return 0;
}
