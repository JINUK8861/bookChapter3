#include <stdio.h>

int main(void) {
		//194p ��2
	/*
		���̰� 8�� int�� 1���� �迭 ����
		���� 8�� �Է¹޾� �迭�� ������ ��, Ȧ���� ¦���� �����Ͽ� ����ϴ� ���α׷� �ۼ�

		���� ����)
		Ȧ�� : 1 3 5 7
		¦�� : 2 4 6 8
	*/

	int arr[8];

	//�迭��� �Է� ����
	for (int i = 0; i < 8; i++) {
		printf("%d��° ��� : ", i+1);
		scanf_s("%d", &arr[i]);
	}
	// (�迭��� �˻�)
	printf("�迭�� ��Ҵ� ");
	for (int i = 0; i < 8; i++) {
		printf("%d ", arr[i]);
	}
	printf("�Դϴ�.\n");

	//Ȧ�� ¦�� ������ ���
	printf("Ȧ�� : ");
	for (int i = 0; i < 8; i++) {
		if (arr[i] % 2 == 1) {
			printf("%d ", arr[i]);
		}
	}
	printf("\n");
	printf("¦�� : ");
	for (int i = 0; i < 8; i++) {
		if (arr[i] % 2 == 0) {
			printf("%d ", arr[i]);
		}
	}

	return 0;
}