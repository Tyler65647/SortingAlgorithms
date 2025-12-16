#include "BucketSort.h"

void BucketSort::insertionSort(std::vector<int>& bucket) {

	for (int index = 1; index < bucket.size(); ++index) {

		int key = bucket[index];

		int index2 = index - 1;

		while (index2 >= 0 && bucket[index2] > key) {

			bucket[index2 + 1] = bucket[index2];

			index2--;

		}

		bucket[index2 + 1] = key;

	}

}

void BucketSort::bucketSort(std::vector<int>& array)
{

	int size = array.size();

	std::vector<std::vector<int>> buckets(size);

	int minValue = *std::min_element(array.begin(), array.end());
	int maxValue = *std::max_element(array.begin(), array.end());
	int range = maxValue - minValue + 1;

	for (int index = 0; index < size; index++) {
	
		int bucketIndex = (array[index] - minValue) * size / range;
	
		buckets[bucketIndex].push_back(array[index]);
	
	}

	for (int index = 0; index < size; index++) {
	
		insertionSort(buckets[index]);
	
	}

	int arrayIndex = 0;

	for (int index = 0; index < size; index++) {
	
		for (int index2 = 0; index2 < buckets[index].size(); index2++) {
	
			array[arrayIndex++] = buckets[index][index2];
	
		}
	
	}

}