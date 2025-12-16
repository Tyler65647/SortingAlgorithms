#pragma once

#include <vector>

class ThreeWayMergeSort
{

private:

	void merge(std::vector<int>& array, int left, int leftMiddle, int rightMiddle, int right);

public:

	void threeWayMergeSort(std::vector<int>& array, int left, int right);

};
