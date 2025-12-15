#pragma once

#include <vector>

class HeapSort
{

private:

	void heapify(std::vector<int>& array, int size, int root);

public:

	void heapSort(std::vector<int>& array);

};

