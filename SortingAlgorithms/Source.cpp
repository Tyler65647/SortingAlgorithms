#include <iostream>
#include <cstdlib>
#include <ctime>

#include "BubbleSort.h"
#include "SelectionSort.h"

int main() {

	srand(time(0));

	BubbleSort bubbleSort;
	SelectionSort selectionSort;

	std::vector<int> array;

	int arraySize = 50;
	int arrayMax = 10;
	
	for (int i = 0; i < arraySize; i++) {
	
		array.push_back((rand() % arrayMax) + 1);	
	
	}

	selectionSort.selectionSort(array);

	for (int index = 0; index < array.size(); index++)
		std::cout << array[index] << " ";

	/*bubbleSort.setArraySize(array);

	std::vector<int> sortedArray = bubbleSort.bubbleSort(array);;

	for (int index = 0; index < sortedArray.size(); index++) {
	
		std::cout << sortedArray[index] << " ";
	
	}*/

	return 0;

}