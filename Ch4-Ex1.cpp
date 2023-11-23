#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {    // Initialises the main function.
	const char* alphabet[]{ "a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z" };
	// Creates an array storing the English alphabet
	// as individual characters using 'const char*'.
	// Surely there's a better way of storing this in plain code.
	for (int j = 0; j < 26; j++) {
		cout << alphabet[j] << endl;
	}
	// Using a 'for' loop to specify the amount of characters to be outputted (26),
	// the program will output each of the characters on it's own seperate line.

	cout << endl;

	return (0); // Returns function.
}               // Ends the main function.
