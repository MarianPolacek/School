#include "pch.h"
#include <iostream>

double* maximum(double* a, int size) {
	// TODO: Implement - find and return pointer to maximum element in array

	return a;
}

void printArray(int* input, int size) {
	// TODO: Print an array
}

int* copyArray(int* input, int inputLength, int from, int to) {
	// TODO: Implement copy array, which create new array filled with elements starting from position "from"
	// and ending at position "to"

	return input;
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

		// EX 3.2: Find max in array
	double numbers[5] = { 4.0, 7.0, 9.0, 15.0, 3.0 };

	double *maxptr = maximum(numbers, 5);
	std::cout << "Max is " << *maxptr << std::endl;

	// EX 3.3: Define 2d dynamic matrix with r - count of rows, s - count of columns
	//         fill it with numbers starting from 0 (first row 0-9, second row 10-19,...)
	int r = 5;
	int s = 10;

	// EX 3.4: Print array
	int arrPrint[5] = { 1,2,3,4,5 };
	printArray(arrPrint, 5);

	// EX 3.5: Function behaves in a bad manner, figure out what is wrong
	iLeakMemory();

	// EX 3.6: Write PrintArray function
	int arrInput[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int* copy = copyArray(arrInput, 10, 3, 7);

	printArray(copy, 3);
}
