#include <iostream>
#include <cstdlib>
#include <ctime>

#include "BubbleSort.h"
#include "SelectionSort.h"
#include "InsertionSort.h"
#include "MergeSort.h"
#include "QuickSort.h"
#include "BogoSort.h"
#include "HeapSort.h"

int main() {

	srand(time(0));

	BubbleSort bubbleSort;
	SelectionSort selectionSort;
	InsertionSort insertionSort;
	MergeSort mergeSort;
	QuickSort quickSort;
	BogoSort bogoSort;
	HeapSort heapSort;

	std::vector<int> array;

	int arraySize = 10;
	int arrayMax = 10;
	
	for (int i = 0; i < arraySize; i++) {

		array.push_back((rand() % arrayMax) + 1);	
	
	}

	//insertionSort.insertionSort(array);

	//selectionSort.selectionSort(array);

	//bubbleSort.bubbleSort(array);

	//mergeSort.mergeSort(array, -1, -1);

	//quickSort.quickSort(array, -1, -1);

	//bogoSort.bogoSort(array);

	heapSort.heapSort(array);

	for (int index = 0; index < array.size(); index++)
		std::cout << array[index] << " ";

	return 0;

}