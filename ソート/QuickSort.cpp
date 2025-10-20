#include "QuickSort.h"
#include "Sort.h"

	 // 配列の要素を入れ替える関数
	void Swap(int& a, int& b)
	{
		int temp = a;
		a = b;
		b = temp;
	}

	// クイックソートの本体
	void QuickSortRecursive(int* array, int left, int right)
	{
		if (left >= right) return;

		int piv= array[(left + right) / 2]; // 中央の要素をピボットに選ぶ
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

		// 左右の部分配列を再帰的にソート
		if (left < k) QuickSortRecursive(array, left, k);
		if (i < right) QuickSortRecursive(array, i, right);
	}


	void QuickSort::Exec(int* array, int size)
	{
		QuickSortRecursive(array, 0, size - 1);
	}

