#pragma once

#include <vector>

class SelectionSort
{

private:

	void swap(int *num1, int *num2);

public:

	void selectionSort(std::vector<int>& array);

};

