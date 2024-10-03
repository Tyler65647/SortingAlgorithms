#pragma once

#include <iostream>
#include <vector>
#include <random>
#include <chrono>

class BogoSort
{

private:

	bool isSorted(std::vector<int>& array, int index);

	void shuffle(std::vector<int>& array, int size);

	void swap(int* num1, int* num2);

public:

	void bogoSort(std::vector<int>& array);

};

