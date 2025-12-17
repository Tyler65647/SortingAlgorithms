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
#include "CycleSort.h"
#include "ThreeWayMergeSort.h"
#include "CountingSort.h"
#include "RadixSort.h"
#include "BucketSort.h"
#include "PigeonholeSort.h"
#include "IntroSort.h"
#include "TimSort.h"

int main() {

	srand(time(0));

	BubbleSort bubbleSort;
	SelectionSort selectionSort;
	InsertionSort insertionSort;
	MergeSort mergeSort;
	QuickSort quickSort;
	BogoSort bogoSort;
	HeapSort heapSort;
	CycleSort cycleSort;
	ThreeWayMergeSort threeWayMergeSort;
	CountingSort countingSort;
	RadixSort radixSort;
	BucketSort bucketSort;
	PigeonholeSort pigeonholeSort;
	IntroSort introSort;
	TimSort timSort;

	std::vector<int> array;

	int arraySize = 100;
	int arrayMax = 100;
	
	for (int i = 0; i < arraySize; i++) {

		array.push_back((rand() % arrayMax) + 1);	
	
	}

	std::cout << "Unsorted Array: \n";
	for (int index = 0; index < array.size(); index++)
		std::cout << array[index] << " ";

	std::cout << "\n\n";

	//insertionSort.insertionSort(array);

	//selectionSort.selectionSort(array);

	//bubbleSort.bubbleSort(array);

	//mergeSort.mergeSort(array, -1, -1);

	//quickSort.quickSort(array, -1, -1);

	//bogoSort.bogoSort(array);

	//heapSort.heapSort(array);

	//cycleSort.cycleSort(array);

	//threeWayMergeSort.threeWayMergeSort(array, -1, - 1);

	//countingSort.countingSort(array);

	//radixSort.radixSort(array);

	//bucketSort.bucketSort(array);

	//pigeonholeSort.pigeonholeSort(array);

	//introSort.introSort(array);

	timSort.timSort(array);

	std::cout << "\nSorted Array: \n";
	for (int index = 0; index < array.size(); index++)
		std::cout << array[index] << " ";

	return 0;

}