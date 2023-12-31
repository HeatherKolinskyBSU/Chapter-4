#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {    // Initialises the main function.
	const char* alphabet[]{ "a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z" };
	// Creates an array storing the English alphabet as individual characters using 'const char*'.
	// Surely there's a better way of storing this in plain code.
	for (int j = 0; j < 25; j++) {
		cout << alphabet[j] << endl;
	}
	// Using a 'for' loop to specify the amount of characters to be outputted,
	// the program will output each of the characters on it's own seperate line.

	cout << endl;

	for (int j = 13; j < 26; j++) {
		cout << alphabet[j] << endl;
	}
	// Pretty much the same as the previous 'for' loop - however now the
	// code is only outputting the second half of the English alphabet.

	cout << endl;

	int reverse[]{ 1, 3, 5, 7, 9 };
	int size = sizeof(reverse) / sizeof(int);
	// Creates a new array for storing individual numbers with 'int'.
	// Assigns each value with a position number for later use.
	for (int j = size-1; j >= 0; j--) {
		cout << reverse[j] << endl;
	}
	// 'for' loop starts array at position 4 and decrements
	// by 1 each time until it reaches position 0.

	cout << endl;

	int averageArray[]{ 10, 15, 25, 35, 50, 75};
	int a = sizeof(averageArray) / sizeof(averageArray[0]);
	// Declares the array and determines it's "size"
	// (number of values present within the array)
	cout << "Array: " << endl;
	for (int i = 0; i < a; i++)
		cout << averageArray[i] << " ";
	// Prints each value to the screen
	// with a space between each one

	cout << endl;
	cout << "Average - "
		 << (10 + 15 + 25 + 35 + 50 + 75) / a << " " << endl;
	         // Retrives an average by adding every value in the
	         // array, then dividing by 'a' (quantity of values)

	cout << endl;
	
	
	cout << endl;

	int arrayValues[] = { 10, 88, 4, 21, 345, 99, 17 };
	int n = sizeof(arrayValues) / sizeof(arrayValues[0]);
	// Declares the array and determines it's "size"
	// (number of values present within the array)
	cout << "Array: " << endl;
	for (int i = 0; i < n; i++)
		cout << arrayValues[i] << " ";
	// Prints each value to the screen
	// with a space between each one
	
	cout << endl;
	cout << "Lowest Value  = "
		 << *min_element(arrayValues, arrayValues + n) << endl;
	     // Retrieves and prints the lowest value from the array
	cout << "Highest Value = " 
		 << *max_element(arrayValues, arrayValues + n) << endl;
	     // Retrieves and prints the highest value from the array
	
	cout << endl;

	int comicallyLargeArray[100];
	int arrayValue = 0;
	// Declares a very big and empty variable.
	// Initialises the first value as '0'.
	for (int i = 0; i < 100; i++) {
		arrayValue++;
		// Until the array hits it's container limit
		// of 100, add 1 to the previous number.

		if (i % 2 == 0) {
			cout << arrayValue << " ";
			// I can't explain why but the program wasn't pulling odd
			// numbers from the program unless I checked for evens.
		}
	}
	
	return 0; // Returns function.
} // Ends the main function.
