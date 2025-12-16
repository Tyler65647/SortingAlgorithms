#pragma once

#include <vector>

class BucketSort
{

private:

	void insertionSort(std::vector<int>& bucket);

public:

	void bucketSort(std::vector<int>& array);

};

