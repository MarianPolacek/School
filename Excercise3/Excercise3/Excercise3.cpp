#include "pch.h"
#include <iostream>

void reverseString(char* input, int size) {
	// TODO: Print input in reverse order
}

double* maximum(double* a, int size) {
	// TODO: Really implement - find max in array

	return a;
}

void sortArray(int* input, int size) {
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

	/*std::cout << "*ptr1 = " << *ptr1 << ","
		<< "*ptr2 = " << *ptr2 << std::endl;*/

	char sampleIput[10] = "abcdefghi";

	// EX 3.2: Implement function in here
	reverseString(sampleIput, 10);

	// EX 3.3: Find max in array
	double numbers[5] = { 4.0, 7.0, 9.0, 15.0, 3.0 };
	
	 double *maxptr = maximum(numbers, 5);
	 std::cout << "Max is " << *maxptr << std::endl;

	// EX 3.4: Sorting function
	int unsortedArray[10] = { 5, 2, 3, 6, 7, 1, 0, 9, 8, 4 };

	sortArray(unsortedArray, 10);

	// NOTE: Sorted array expected
	for (int i = 0; i < 10; i++)
	{
		std::cout << unsortedArray[i];
	}

	// EX 3.4: Function behaves in a bad manner, figure out what is wrong
	iLeakMemory();
}
