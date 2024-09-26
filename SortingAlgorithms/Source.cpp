#include <iostream>
#include <cstdlib>
#include <ctime>

#include "BubbleSort.h"

int main() {

	srand(time(0));

	BubbleSort bubbleSort;

	std::vector<int> array;

	int arraySize = 100;
	int arrayMax = 10;
	
	for (int i = 0; i < arraySize; i++) {
	
		array.push_back((rand() % arrayMax) + 1);	
	
	}

	bubbleSort.setArraySize(array);

	std::vector<int> sortedArray = bubbleSort.bubbleSort(array);;

	for (int index = 0; index < sortedArray.size(); index++) {
	
		std::cout << sortedArray[index] << " ";
	
	}

	return 0;

}