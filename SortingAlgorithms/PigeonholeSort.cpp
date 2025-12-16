#include "PigeonholeSort.h"

void PigeonholeSort::pigeonholeSort(std::vector<int>& array)
{

	int size = array.size();

	int minValue = *std::min_element(array.begin(), array.end());
	int maxValue = *std::max_element(array.begin(), array.end());

	int range = maxValue - minValue + 1;

	std::vector<std::vector<int>> holes(range);

	for (int index = 0; index < size; index++) {
	
		holes[array[index] - minValue].push_back(array[index]);
	
	}

	int arrayIndex = 0;

	for (int index = 0; index < range; index++) {
	
		for (int index2 = 0; index2 < holes[index].size(); index2++) {
	
			array[arrayIndex++] = holes[index][index2];
	
		}
	
	}

}
