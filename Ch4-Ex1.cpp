#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {    // Initialises the main function.
	const char* alphabet[]{ "a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z" };
	// Creates an array storing the English alphabet as individual characters using 'const char*'.
	// Surely there's a better way of storing this in plain code.
	for (int j = 0; j < 26; j++) {
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

	return (0); // Returns function.
}               // Ends the main function.
