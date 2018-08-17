#include "헤더.h"

void BubbleSort(int* array, int arraySize) { //버블 정렬 함수(오름차순)
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
