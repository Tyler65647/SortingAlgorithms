#pragma once

#include <vector>

class MergeSort
{

private:

	void merge(std::vector<int>& array, int left, int middle, int right);

public:

	void mergeSort(std::vector<int>& array, int left, int right);

};

