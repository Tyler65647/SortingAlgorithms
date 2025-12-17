#pragma once

#include <vector>

class IntroSort
{

private:

	void swapValues(int& a, int& b);
	void insertionSort(std::vector<int>& array, int begin, int end);
	int partition(std::vector<int>& array, int low, int high);
	int medianOfThree(std::vector<int>& array, int a, int b, int c);
	void makeHeap(std::vector<int>& array, int size, int root);
	void sortHeap(std::vector<int>& array, int size);
	void introSortUtil(std::vector<int>& array, int begin, int end, int depthLimit);

public:

	void introSort(std::vector<int>& array);

};

