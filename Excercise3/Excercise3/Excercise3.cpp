#include "pch.h"
#include <iostream>

void displayLen(char* input) {
	// TODO: Display length of input
}

void reverseString(char* input) {
	// TODO: Print input in reverse order
}

void sortArray(int* input) {
	// TODO: Sort array in place with pointers
}

void iLeakMemory() {
	// TODO: Figure out, what is missing in this function

	char* temporaryBuffer = new char[10];
	strcpy_s(temporaryBuffer, 10, "ABCD");
}

int main()
{
	// EX 3.1: Basics
	int x = 1;
	int y = 5;
	int *ptr1;
	int *ptr2;

	// TODO: Add assigmens, which will print following *ptr1 = 1, *ptr2 = 5

	ptr1 = &x;
	ptr2 = &y;

	std::cout << "*ptr1 = " << *ptr1 << ","
		<< "*ptr2 = " << *ptr2 << std::endl;

	char sampleIput[10] = "abcdefghi";

	// EX 3.2: Implement function in here
	displayLen(sampleIput);

	// EX 3.3: Implement function in here
	reverseString(sampleIput);

	// EX 3.4: Sorting function
	int unsortedArray[10] = { 5, 2, 3, 6, 7, 1, 0, 9, 8, 4 };

	sortArray(unsortedArray);

	// NOTE: Expects, that array will be sorted
	for (int i = 0; i < 10; i++)
	{
		std::cout << unsortedArray[i];
	}

	// EX 3.5: Function behaves in a bad manner, figure out what is wrong
	iLeakMemory();
}
