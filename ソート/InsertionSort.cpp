#include "InsertionSort.h"


void InsertionSort::Exec(int* array, int size)
{
	for (int i = 1; i < size; ++i)
	{
		// �}���Ώۂ̒l�𓾂�
		int key = array[i]; 
		int k = i - 1;

		// key���傫�Ȓl���E�ɒu��
		while (k >= 0 && array[k] > key)
		{
			array[k + 1] = array[k];
			--k;
		}
		// Key�𐳊m�Ȉʒu�ɑ}������
		array[k + 1] = key;
	}
}