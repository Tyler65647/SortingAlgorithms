#include "TimSort.h"

int TimSort::calcMinRun(std::vector<int>& array)
{
	
	int run = 0;

	int size = array.size();

	while (size >= minRun) {

		run |= (size & 1);

		size >>= 1;

	}

	return size + run;

}

void TimSort::insertionSort(std::vector<int>& array, int left, int right)
{

	for (int index = left + 1; index <= right; index++) {

		int key = array[index];

		int index2 = index - 1;

		while (index2 >= left && array[index2] > key) {

			array[index2 + 1] = array[index2];

			index2--;

		}

		array[index2 + 1] = key;

	}

}

void TimSort::merge(std::vector<int>& array, int left, int middle, int right)
{

	std::vector<int> leftVector(array.begin() + left, array.begin() + middle + 1);
	std::vector<int> rightVector(array.begin() + middle + 1, array.begin() + right + 1);

	int index1 = 0, index2 = 0, index3 = left;

	while (index1 < leftVector.size() && index2 < rightVector.size()) {

		if (leftVector[index1] <= rightVector[index2])
			array[index3++] = leftVector[index1++];
		else
			array[index3++] = rightVector[index2++];

	}

	while (index1 < leftVector.size())
		array[index3++] = leftVector[index1++];

	while (index2 < rightVector.size())
		array[index3++] = rightVector[index2++];

}

int TimSort::findRun(std::vector<int>& array, int start)
{
	
	int end = start + 1;
	int size = array.size();

	if (end == size)
		return end;

	if (array[end] < array[start]) {
		while (end < size && array[end] < array[end - 1])
			end++;
		std::reverse(array.begin() + start, array.begin() + end);
	}
	else {
		while (end < size && array[end] >= array[end - 1])
			end++;
	}

	return end;

}

void TimSort::timSort(std::vector<int>& array)
{

	int size = array.size();

	int minRun = calcMinRun(array);

	std::vector<std::pair<int, int>> runs;

	int index = 0;

	while (index < size) {

		int runEnd = findRun(array, index);
		int runSize = runEnd - index;

		if (runSize < minRun) {
		
			int end = std::min(index + minRun, size);
			insertionSort(array, index, end - 1);
			runEnd = end;
		
		}

		runs.push_back(std::make_pair(index, runEnd));

		index = runEnd;

		while (runs.size() > 1) {

			int left1 = runs[runs.size() - 2].first;
			int right1 = runs[runs.size() - 2].second;
			int left2 = runs[runs.size() - 1].first;
			int right2 = runs[runs.size() - 1].second;

			int length1 = right1 - left1;
			int length2 = right2 - left2;

			if (length1 <= length2) {

				merge(array, left1, right1 - 1, right2 - 1);
				runs.pop_back();
				runs[runs.size() - 1] = { left1, right2 };

			}
			else {
			
				break;
			
			}

		}

		while (runs.size() > 1) {

			int left1 = runs[runs.size() - 2].first;
			int right1 = runs[runs.size() - 2].second;
			int left2 = runs[runs.size() - 1].first;
			int right2 = runs[runs.size() - 1].second;

			int length1 = right1 - left1;
			int length2 = right2 - left2;

			merge(array, left1, right1 - 1, right2 - 1);
			runs.pop_back();
			runs[runs.size() - 1] = { left1, right2 };

		}

	}

}
