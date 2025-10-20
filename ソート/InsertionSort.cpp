#include "InsertionSort.h"


void InsertionSort::Exec(int* array, int size)
{
	for (int i = 1; i < size; ++i)
	{
		int key = array[i]; // �}���Ώۂ̒l�𓾂�
		int k = i - 1;

		// Key���傫���l���E�ɒu��
		while (k >= 0 && array[k] > key)
		{
			array[k + 1] = array[k];
			--k;
		}
		// Key�𐳊m�Ȉʒu�ɑ}������
		array[k + 1] = key;
	}
}