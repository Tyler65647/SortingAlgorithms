#pragma once

#include <vector>

class RadixSort
{

private:

	int getMax(std::vector<int>& array);
	void countSort(std::vector<int>& array, int exp);

public:

	void radixSort(std::vector<int>& array);

};

