#include "InsertionSort.h"


void InsertionSort::Exec(int* array, int size)
{
	for (int i = 1; i < size; ++i)
	{
		int key = array[i]; // 挿入対象の値を得る
		int j = i - 1;

		// Keyより大きい値を右に置く
		while (j >= 0 && array[j] > key)
		{
			array[j + 1] = array[j];
			--j;
		}
		// Keyを正確な位置に挿入する
		array[j + 1] = key;
	}
}