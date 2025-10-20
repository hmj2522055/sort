#include "SelectionSort.h"
#include <algorithm> 

void SelectionSort::Exec(int* array, int size)
{
	// I‚ğŠî€‚É‚µ‚ÄÅ¬’l‚ğ’T‚·
	for (int i = 0; i < size - 1; ++i)
	{
		// Å¬’l
		int min = i;
		for (int k = i + 1; k < size; ++k)
		{
			if (array[k] < array[min])
			{
				min = k;
			}
		}
		// Å¬’l‚ğŒ©‚Â‚¯‚½‚çŒğŠ·
		std::swap(array[i], array[min]);
	}
}