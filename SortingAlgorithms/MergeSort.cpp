#include "MergeSort.h"

void MergeSort::merge(std::vector<int>& array, int left, int middle, int right)
{

	int index, index2, index3;

	int leftSize = middle - left + 1;
	int rightSize = right - middle;

	std::vector<int> leftArray(leftSize), rightArray(rightSize);

	for (index = 0; index < leftSize; index++) {

		leftArray[index] = array[left + index];

	}

	for (index2 = 0; index2 < rightSize; index2++) {

		rightArray[index2] = array[middle + 1 + index2];

	}

	index = 0, index2 = 0, index3 = left;

	while (index < leftSize && index2 < rightSize) {

		if (leftArray[index] <= rightArray[index2]) {

			array[index3] = leftArray[index];

			index++;

		}

		else {

			array[index3] = rightArray[index2];

			index2++;

		}

		index3++;

	}

	while (index < leftSize) {

		array[index3] = leftArray[index];

		index++;

		index3++;

	}

	while (index < rightSize) {

		array[index3] = rightArray[index2];

		index2++;

		index3++;

	}

}

void MergeSort::mergeSort(std::vector<int>& array, int left, int right)
{

	int size = array.size();
	
	
	if (left == -1 && right == -1) {

		left = 0;
		right = size - 1;

	}

	if (left < right) {

		int middle = left + (right - left) / 2;

		mergeSort(array, left, middle);

		mergeSort(array, middle + 1, right);

		merge(array, left, middle, right);


	}

}
