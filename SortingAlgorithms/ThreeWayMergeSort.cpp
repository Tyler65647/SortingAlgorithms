#include "ThreeWayMergeSort.h"

void ThreeWayMergeSort::merge(std::vector<int>& array, int left, int leftMiddle, int rightMiddle, int right)
{

	int size1 = leftMiddle - left + 1;
	int size2 = rightMiddle - leftMiddle;
	int size3 = right - rightMiddle;

	std::vector<int> leftArray(size1);
	std::vector<int> middleArray(size2);
	std::vector<int> rightArray(size3);

	for (int index = 0; index < size1; index++) {
	
		leftArray[index] = array[left + index];
	
	}

	for (int index = 0; index < size2; index++) {
	
		middleArray[index] = array[leftMiddle + 1 + index];
	
	}

	for (int index = 0; index < size3; index++) {
	
		rightArray[index] = array[rightMiddle + 1 + index];
	
	}

	int index1 = 0, index2 = 0, index3 = 0;
	int mergedIndex = left;

	while (index1 < size1 || index2 < size2 || index3 < size3) {

		int minValue = INT_MAX;
		int minIndex = -1;

		if (index1 < size1 && leftArray[index1] < minValue) {
		
			minValue = leftArray[index1];
			minIndex = 0;
		
		}

		if (index2 < size2 && middleArray[index2] < minValue) {
		
			minValue = middleArray[index2];
			minIndex = 1;
		
		}

		if (index3 < size3 && rightArray[index3] < minValue) {
		
			minValue = rightArray[index3];
			minIndex = 2;
		
		}

		if (minIndex == 0) {
		
			array[mergedIndex++] = leftArray[index1++];
		
		}
		else if (minIndex == 1) {
		
			array[mergedIndex++] = middleArray[index2++];
		
		}
		else {
		
			array[mergedIndex++] = rightArray[index3++];
		
		}

	}

}

void ThreeWayMergeSort::threeWayMergeSort(std::vector<int>& array, int left, int right)
{

	int size = array.size();

	if (left == -1 && right == -1) {

		left = 0;
		right = size - 1;

	}

	if (left >= right) {
	
		return;
	
	}

	int leftMiddle = left + (right - left) / 3;
	int rightMiddle = left + 2 * (right - left) / 3;

	threeWayMergeSort(array, left, leftMiddle);
	threeWayMergeSort(array, leftMiddle + 1, rightMiddle);
	threeWayMergeSort(array, rightMiddle + 1, right);

	merge(array, left, leftMiddle, rightMiddle, right);

}
