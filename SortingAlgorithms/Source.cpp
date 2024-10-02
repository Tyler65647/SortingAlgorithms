#include <iostream>
#include <cstdlib>
#include <ctime>

#include "BubbleSort.h"
#include "SelectionSort.h"
#include "InsertionSort.h"
#include "MergeSort.h"

int main() {

	srand(time(0));

	BubbleSort bubbleSort;
	SelectionSort selectionSort;
	InsertionSort insertionSort;
	MergeSort mergeSort;

	std::vector<int> array;

	int arraySize = 100;
	int arrayMax = 100;
	
	for (int i = 0; i < arraySize; i++) {
	
		array.push_back((rand() % arrayMax) + 1);	
	
	}

	/*insertionSort.insertionSort(array);

	for (int index = 0; index < array.size(); index++)
		std::cout << array[index] << " ";*/

	/*selectionSort.selectionSort(array);

	for (int index = 0; index < array.size(); index++)
		std::cout << array[index] << " ";*/

	/*bubbleSort.bubbleSort(array);

	for (int index = 0; index < array.size(); index++)
		std::cout << array[index] << " ";*/

	mergeSort.mergeSort(array, -1, -1);

	for (int index = 0; index < array.size(); index++)
		std::cout << array[index] << " ";

	return 0;

}