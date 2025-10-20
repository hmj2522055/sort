#include "InsertionSort.h"


void InsertionSort::Exec(int* array, int size)
{
	for (int i = 1; i < size; ++i)
	{
		int key = array[i]; // 挿入対象の値を得る
		int k = i - 1;

		// Keyより大きい値を右に置く
		while (k >= 0 && array[k] > key)
		{
			array[k + 1] = array[k];
			--k;
		}
		// Keyを正確な位置に挿入する
		array[k + 1] = key;
	}
}