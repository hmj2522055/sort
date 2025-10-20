#include "InsertionSort.h"


void InsertionSort::Exec(int* array, int size)
{
	for (int i = 1; i < size; ++i)
	{
		// 挿入対象の値を得る
		int key = array[i]; 
		int k = i - 1;

		// keyより大きな値を右に置く
		while (k >= 0 && array[k] > key)
		{
			array[k + 1] = array[k];
			--k;
		}
		// Keyを正確な位置に挿入する
		array[k + 1] = key;
	}
}