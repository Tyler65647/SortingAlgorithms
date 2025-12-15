#include "CycleSort.h"
#include <iostream>

void CycleSort::cycleSort(std::vector<int>& array)
{

	int size = array.size();

	int cycles = 0;

	for (int cycleStart = 0; cycleStart <= size - 2; cycleStart++) {

		int item = array[cycleStart];

		int position = cycleStart;

		for (int index = cycleStart + 1; index < size; index++) {

			if (array[index] < item)
				position++;

		}

		if (position == cycleStart)
			continue;

		while (item == array[position])
			position++;

		if (position != cycleStart) {

			std::swap(item, array[position]);

			cycles++;

		}

		while (position != cycleStart) {

			position = cycleStart;

			for (int index = cycleStart + 1; index < size; index++) {

				if (array[index] < item)
					position++;

			}

			while (item == array[position])
				position++;

			if (item != array[position]) {

				std::swap(item, array[position]);

				cycles++;

			}

		}

	}

	//std::cout << "Cycles - " << cycles << "\n\n\n\n";

}
