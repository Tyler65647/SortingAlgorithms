#include "SelectionSort.h"

void SelectionSort::swap(int* num1, int* num2)
{

	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;

}

void SelectionSort::selectionSort(std::vector<int>& array)
{

	int size = array.size();

	int minimumIndex;

	for (int index = 0; index < size - 1; index++) {

		minimumIndex = index;

		for (int index2 = index + 1; index2 < size; index2++) {

			if (array[index2] < array[minimumIndex]) {

				minimumIndex = index2;

			}

		}

		swap(&array[minimumIndex], &array[index]);

	}

}
