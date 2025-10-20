#pragma once
#include "Sort.h"

// クイックソート
class QuickSort :public Sort
{
public:
	virtual void Exec(int* array, int size) override;
};
