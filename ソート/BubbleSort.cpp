#include "BubbleSort.h"

void BubbleSort::Exec(int* array, int size)
{
	for (int i = 0; i < size - 1; ++i)
	{
		// ŒJ‚è•Ô‚µ‚Ä‘‚â‚µŒ¸‚ç‚·
		for (int j = 0; j < size - i - 1; ++j)
		{
			if (array[j] > array[j + 1])
			{
				
				int temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
}