#include "InsertionSort.h"


void InsertionSort::Exec(int* array, int size)
{
	for (int i = 1; i < size; ++i)
	{
		int key = array[i]; // �}���Ώۂ̒l�𓾂�
		int j = i - 1;

		// Key���傫���l���E�ɒu��
		while (j >= 0 && array[j] > key)
		{
			array[j + 1] = array[j];
			--j;
		}
		// Key�𐳊m�Ȉʒu�ɑ}������
		array[j + 1] = key;
	}
}