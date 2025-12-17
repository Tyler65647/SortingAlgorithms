#include "IntroSort.h"
#include <algorithm>
#include <cmath>

void IntroSort::swapValues(int& a, int& b)
{

	std::swap(a, b);

}

void IntroSort::insertionSort(std::vector<int>& array, int begin, int end)
{

	for (int index = begin + 1; index <= end; index++) {
	
		int key = array[index];
		int index2 = index - 1;
		
		while (index2 >= begin && array[index2] > key) {
		
			array[index2 + 1] = array[index2];
			index2 = index2 - 1;
		
		}
	
		array[index2 + 1] = key;
	
	}

}

int IntroSort::partition(std::vector<int>& array, int low, int high) {

	int pivot = array[high];
	int lowIndex = low - 1;

	for (int index = low; index < high; index++) {
	
		if (array[index] <= pivot) {
		
			lowIndex++;
			swapValues(array[lowIndex], array[index]);
		
		}
	
	}

	swapValues(array[lowIndex + 1], array[high]);

	return lowIndex + 1;

}

int IntroSort::medianOfThree(std::vector<int>& array, int a, int b, int c)
{
	
	if (array[a] < array[b]) {

		if (array[b] < array[c]) return b;

		return (array[a] < array[c]) ? c : a;

	}
	else {

		if (array[a] < array[c]) return a;

		return (array[b] < array[c]) ? c : b;

	}

}

void IntroSort::introSortUtil(std::vector<int>& array, int begin, int end, int depthLimit)
{
    int size = end - begin + 1;

    if (size < 16) {

		insertionSort(array, begin, end);
  
		return;
   
	}

    if (depthLimit == 0) {
	
		std::make_heap(array.begin() + begin, array.begin() + end + 1);
		std::sort_heap(array.begin() + begin, array.begin() + end + 1);

        return;
 
	}

	int middle = begin + (end - begin) / 2;
    int pivotIndex = medianOfThree(array, begin, middle, end);

    swapValues(array[pivotIndex], array[end]);

    int partitionIndex = partition(array, begin, end);

    introSortUtil(array, begin, partitionIndex - 1, depthLimit - 1);
    introSortUtil(array, partitionIndex + 1, end, depthLimit - 1);

}

void IntroSort::introSort(std::vector<int>& array)
{

	int depthLimit = 2 * std::log2(array.size());

	introSortUtil(array, 0, array.size() - 1, depthLimit);

}
