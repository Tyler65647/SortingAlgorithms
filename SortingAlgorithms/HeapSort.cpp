#include "HeapSort.h"

void HeapSort::heapify(std::vector<int>& array, int size, int root)
{

	int largest = root;

	int leftChild = 2 * root + 1;
	int rightChild = 2 * root + 2;

	if (leftChild < size && array[leftChild] > array[largest]) {
	
		largest = leftChild;
	
	}

	if (rightChild < size && array[rightChild] > array[largest]) {
	
		largest = rightChild;
	
	}

	if (largest != root) {
	
		std::swap(array[root], array[largest]);
	
		heapify(array, size, largest);
	
	}

}

void HeapSort::heapSort(std::vector<int>& array)
{

	int size = array.size();

	for (int index = size / 2 - 1; index >= 0; index--)
		heapify(array, size, index);

	for (int index = size - 1; index > 0; index--) {
	
		std::swap(array[0], array[index]);
	
		heapify(array, index, 0);
	
	}

}
