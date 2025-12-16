#include "CountingSort.h"

void CountingSort::countingSort(std::vector<int>& array)
{

	int size = array.size();
	
	int maxValue = 0;

	for (int index = 0; index < size; index++) {

		maxValue = std::max(maxValue, array[index]);

	}

	std::vector<int> countArray(maxValue + 1, 0);

	for (int index = 0; index < size; index++) {
	
		countArray[array[index]]++;
	
	}

	for (int index = 1; index <= maxValue; index++) {
	
		countArray[index] += countArray[index - 1];
	
	}

	std::vector<int> outputArray(size);

	for (int index = size - 1; index >= 0; index--) {
	
		outputArray[countArray[array[index]] - 1] = array[index];
	
		countArray[array[index]]--;
	
	}

	for (int index = 0; index < size; index++) {
	
		array[index] = outputArray[index];
	
	}

}
