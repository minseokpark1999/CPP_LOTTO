#include "���.h"

void BubbleSort(int* array, int arraySize) { //���� ���� �Լ�(��������)
	int temp = 0;
	for (int i = 0; i < arraySize - 1; i++) {
		for (int j = 0; j < arraySize - 1 - i; j++) {
			if (array[j] > array[j + 1]) {
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
}
