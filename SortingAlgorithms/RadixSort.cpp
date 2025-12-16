#include "RadixSort.h"

int RadixSort::getMax(std::vector<int>& array)
{

	int maxValue = array[0];

	for (int index = 1; index < array.size(); index++) {
		
		if (array[index] > maxValue) {
		
			maxValue = array[index];
	
		}
	
	}

	return maxValue;

}

void RadixSort::countSort(std::vector<int>& array, int exp)
{

	int size = array.size();

	std::vector<int> outputArray(size);

	std::vector<int> countArray(10, 0);

	for (int index = 0; index < size; index++) {
	
		countArray[(array[index] / exp) % 10]++;
	
	}

	for (int index = 1; index < 10; index++) {
	
		countArray[index] += countArray[index - 1];
	
	}

	for (int index = size - 1; index >= 0; index--) {
	
		outputArray[countArray[(array[index] / exp) % 10] - 1] = array[index];
	
		countArray[(array[index] / exp) % 10]--;
	
	}

	for (int index = 0; index < size; index++) {
	
		array[index] = outputArray[index];
	
	}

}

void RadixSort::radixSort(std::vector<int>& array)
{

	int maxValue = getMax(array);

	for (int exp = 1; maxValue / exp > 0; exp *= 10) {
	
		countSort(array, exp);
	
	}

}
