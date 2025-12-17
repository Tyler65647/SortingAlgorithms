#include "ShellSort.h"

void ShellSort::shellSort(std::vector<int>& array)
{

	int size = array.size();

	for (int gap = size / 2; gap > 0; gap /= 2) {

		for (int index = gap; index < size; index++) {

			int temp = array[index];
			int index2 = index;

			while (index2 >= gap && array[index2 - gap] > temp) {

				array[index2] = array[index2 - gap];
				index2 -= gap;

			}

			array[index2] = temp;

		}
	}

}
