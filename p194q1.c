#include <stdio.h>

int main(void) {
		//��1
	/*
		���̰� 5�� int�� 1���� �迭 ����
		����ڷκ��� �� 5���� ���� �Է¹��� �� ���� ���� ���

		- �Էµ� ���� �� �ִ�
		- �Էµ� ���� �� �ּڰ�
		- �Էµ� ������ ����
	*/

	int arr[5] = { 0, };

	//���� 5�� �Է�
	for (int i = 0; i < 5; i++) {
		printf("NUM%d : ", i + 1);
		scanf_s("%d", &arr[i]);
	}

	//�ִ� �ּڰ� ���� �ʱ�ȭ
	int max =arr[0], min = arr[0], sum = 0;

	//�ִ� ���ϰ� ���
	for (int i = 0; i < 5; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	printf("�ִ� : %d\n", max);

	//�ּڰ� ���ϰ� ���
	for (int i = 0; i < 5; i++) {
		if (min > arr[i]) {
			min = arr[i];
		}
	}
	printf("�ּڰ� : %d\n", min);

	//���� ���ϰ� ���
	for (int i = 0; i < 5; i++) {
		sum += arr[i];
	}
	printf("���հ� : %d\n", sum);

	return 0;
}