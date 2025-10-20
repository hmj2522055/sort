#include "RadixSort.h"
#include <algorithm>
#include <vector>   

void RadixSort::Exec(int* array, int size)
{
	// 最大値を取得して桁数を決定
	int maxVal = array[0];
	for (int i = 1; i < size; ++i)
		maxVal = std::max(maxVal, array[i]);

	// 各桁ごとにソート（1の位、10の位、100の位…）
	for (int exp = 1; maxVal / exp > 0; exp *= 10)
	{
		// カウント配列（0〜9の10個）
		int count[10] = { 0 };

		// 各要素の該当桁の数字をカウント
		for (int i = 0; i < size; ++i)
			count[(array[i] / exp) % 10]++;

		// 累積和に変換（安定ソートのため）
		for (int i = 1; i < 10; ++i)
			count[i] += count[i - 1];

		// 一時配列にソート結果を格納
		std::vector<int> output(size);
		for (int i = size - 1; i >= 0; --i)
		{
			int digit = (array[i] / exp) % 10;
			output[--count[digit]] = array[i];
		}

		// 元の配列にコピー
		for (int i = 0; i < size; ++i)
			array[i] = output[i];
	}
}