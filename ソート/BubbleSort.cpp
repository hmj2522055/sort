#include "BubbleSort.h"

void BubbleSort::Exec(int* array, int size)
{
	for (int i = 0; i < size - 1; ++i)
	{
		// ŒJ‚è•Ô‚µ‚Ä‘‚â‚µŒ¸‚ç‚·
		for (int k = 0; k < size - i - 1; ++k)
		{
			if (array[k] > array[k + 1])
			{
				
				int temp = array[k];
				array[k] = array[k + 1];
				array[k + 1] = temp;
			}
		}
	}
}