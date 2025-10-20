#include "SelectionSort.h"
#include <algorithm> 

void SelectionSort::Exec(int* array, int size)
{
	// I����ɂ��čŏ��l��T��
	for (int i = 0; i < size - 1; ++i)
	{
		// �ŏ��l
		int min = i;
		for (int k = i + 1; k < size; ++k)
		{
			if (array[k] < array[min])
			{
				min = k;
			}
		}
		// �ŏ��l�������������
		std::swap(array[i], array[min]);
	}
}