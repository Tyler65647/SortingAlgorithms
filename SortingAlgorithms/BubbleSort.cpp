#include "BubbleSort.h"

void BubbleSort::setArraySize(std::vector<int> array)
{

    this->arraySize = array.size();

}

int BubbleSort::getArraySize()
{
    return this->arraySize;
}

std::vector<int> BubbleSort::bubbleSort(std::vector<int>& array)
{
    
    int arraySize = getArraySize();

    for (int index = 0; index < arraySize - 1; index++) {

        for (int index2 = 0; index2 < arraySize - index - 1; index2++) {

            if (array[index2] > array[index2 + 1]) {

                int temp = array[index2];

                array[index2] = array[index2 + 1];
                array[index2 + 1] = temp;

            }

        }

    }

    return array;
    
}
