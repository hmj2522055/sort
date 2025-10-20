#include "QuickSort.h"
#include "Sort.h"

	 // �z��̗v�f�����ւ���֐�
	void Swap(int& a, int& b)
	{
		int temp = a;
		a = b;
		b = temp;
	}

	// �N�C�b�N�\�[�g�̖{��
	void QuickSortRecursive(int* array, int left, int right)
	{
		if (left >= right) return;

		int piv= array[(left + right) / 2]; // �����̗v�f���s�{�b�g�ɑI��
		int i = left;
		int k = right;

		while (i <= k)
		{
			while (array[i] < piv) i++;
			while (array[k] > piv) k--;
			if (i <= k)
			{
				Swap(array[i], array[k]);
				i++;
				k--;
			}
		}

		// ���E�̕����z����ċA�I�Ƀ\�[�g
		if (left < k) QuickSortRecursive(array, left, k);
		if (i < right) QuickSortRecursive(array, i, right);
	}


	void QuickSort::Exec(int* array, int size)
	{
		QuickSortRecursive(array, 0, size - 1);
	}

