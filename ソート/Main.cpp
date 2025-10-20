#include <iostream>
#include <vector>
#include <chrono>
#include "BubbleSort.h"
#include "SelectionSort.h"
#include "InsertionSort.h"
#include "QuickSort.h"
#include "RadixSort.h"
using namespace std;

void ShowArray(int* array, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << ' ';
	}
	cout << endl;
}

int main()
{
	constexpr int Size = 5;
	//Sort* sort = new BubbleSort();
	Sort* sort = new InsertionSort();
	//Sort* sort = new SelectionSort();
	//Sort* sort = new QuickSort();
	//Sort* sort = new RadixSort();

	// �z��쐬
	vector<int> array(Size);
	for (int i = 0; i < Size; i++)
	{
		array[i] = rand() % 100;
	}
	ShowArray(array.data(), Size);

	// ���Ԍv���J�n
	auto start = std::chrono::system_clock::now();

	// �\�[�g���s
	cout << typeid(*sort).name() << endl;
	sort->Exec(array.data(), Size);
	delete sort;

	// ���Ԍv���I��
	auto end = std::chrono::system_clock::now();
	double elapsed = chrono::duration_cast<std::chrono::milliseconds>(end - start).count(); //�����ɗv�������Ԃ��~���b�ɕϊ�

ShowArray(array.data(), Size);

	// ���v���Ԃ�\��
	cout << elapsed / 1000.0 << "sec" << endl;
}
