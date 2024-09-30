#include "InsertionSort.h"

void InsertionSort::insertionSort(std::vector<int>& array)
{

	int size = array.size();

	for (int index = 0; index < size; index++) {

		int key = array[index];

		int index2 = index - 1;

		while (index2 >= 0 && array[index2] > key) {

			array[index2 + 1] = array[index2];

			index2 = index2 - 1;

		}

		array[index2 + 1] = key;

	}

}
