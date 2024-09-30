#pragma once

#include <vector>

class BubbleSort
{

private:

	int arraySize;

public:

	void setArraySize(std::vector<int> array);
	int getArraySize();

	std::vector<int> bubbleSort(std::vector<int> array);

};

