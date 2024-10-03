#include "BogoSort.h"

bool BogoSort::isSorted(std::vector<int>& array, int index)
{
	
	while (--index > 0) {

		if (array[index] < array[index - 1]) {

			return false;

		}

	}

	return true;

}

void BogoSort::shuffle(std::vector<int>& array, int size)
{

	std::random_device rd;

	auto seed = std::chrono::high_resolution_clock::now().time_since_epoch().count();

	std::mt19937 gen(seed);

	std::uniform_int_distribution<> distrib(0, size - 1);

	for (int index = 0; index < size; index++) {

		int randomIndex = distrib(gen);

		swap(&array[index], &array[randomIndex]);

	}

}

void BogoSort::swap(int* num1, int* num2)
{

	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;

}

void BogoSort::bogoSort(std::vector<int>& array)
{

	int size = array.size();

	int timesSorted = 1;

	while (!isSorted(array, size)) {

		std::cout << "Iteration #" << timesSorted << "\n";

		shuffle(array, size);

		for (int index = 0; index < array.size(); index++)
			std::cout << array[index] << " ";

		std::cout << "\n";

		timesSorted++;

	}

	std::cout << "\n";

}
