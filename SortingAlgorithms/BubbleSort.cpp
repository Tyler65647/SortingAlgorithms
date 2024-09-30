#include "BubbleSort.h"

void BubbleSort::bubbleSort(std::vector<int>& array)
{
    
    int size = array.size();

    for (int index = 0; index < size - 1; index++) {

        for (int index2 = 0; index2 < size - index - 1; index2++) {

            if (array[index2] > array[index2 + 1]) {

                int temp = array[index2];

                array[index2] = array[index2 + 1];
                array[index2 + 1] = temp;

            }

        }

    }

}
