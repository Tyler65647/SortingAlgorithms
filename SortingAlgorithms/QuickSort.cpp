#include "QuickSort.h"

int QuickSort::partition(std::vector<int>& array, int low, int high)
{

	int pivot = array[high];

	int index = low - 1;

	for (int index2 = low; index2 <= high - 1; index2++) {

		if (array[index2] < pivot) {

			index++;

			swap(&array[index], &array[index2]);

		}


	}

	swap(&array[index + 1], &array[high]);

	return index + 1;

}

void QuickSort::swap(int* num1, int* num2)
{

	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;

}

void QuickSort::quickSort(std::vector<int>& array, int low, int high)
{

	int size = array.size();

	if (low == -1 && high == -1) {
	
		low = 0;
		high = size - 1; 
	
	}

	if (low < high) {

		int pivot = partition(array, low, high);

		quickSort(array, low, pivot - 1);
		quickSort(array, pivot + 1, high);

	}

}
