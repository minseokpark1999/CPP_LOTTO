#include "���.h"

int main() {
	
	void BubbleSort(int* array, int arraySize);

	srand((unsigned int)time(NULL));
	int array[6] = { 0, };
	int line = 0;

	cout << "�� ���� ����ұ��?" << " ";
	cin >> line;

	for (int k = 0; k < line; k++) {

		for (;;) { //Ȧ�� 3�� (�ߺ�X, 1~45)
			for (int i = 0; i < 3; i++) {
				array[i] = rand() % 45 + 1;
			}
			if (array[0] % 2 == 1 && array[1] % 2 == 1 && array[2] % 2 == 1 && (array[0] != array[1]) && (array[1] != array[2]) && (array[2] != array[0])) {
				break;
			}
		}

		for (;;) { //Ȧ�� 3�� (�ߺ�X, 1~45)
			for (int i = 3; i < 6; i++) {
				array[i] = rand() % 45 + 1;
			}
			if (array[3] % 2 == 0 && array[4] % 2 == 0 && array[5] % 2 == 0 && (array[3] != array[4]) && (array[4] != array[5]) && (array[5] != array[3])) {
				break;
			}
		}

		BubbleSort(array, 6); //���� ����

		cout << "�ζ� ��ȣ : "; //��ȣ ���
		for (int i = 0; i < 6; i++) {
			cout << array[i] << " ";
		}
		cout << endl;
	}

	return 0;
}

