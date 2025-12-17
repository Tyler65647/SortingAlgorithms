#pragma once

#include <vector>

class TimSort
{

private:

	const int minRun = 32;

	int calcMinRun(std::vector<int>& array);
	void insertionSort(std::vector<int>& array, int left, int right);
	void merge(std::vector<int>& array, int left, int middle, int right);
	int findRun(std::vector<int>& array, int start);

public:

	void timSort(std::vector<int>& array);

};

