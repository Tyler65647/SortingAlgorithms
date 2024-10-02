#pragma once

#include <vector>

class QuickSort
{

private:

	int partition(std::vector<int>& array, int low, int high);

	void swap(int* num1, int* num2);

public:

	void quickSort(std::vector<int>& array, int low, int high);

};

