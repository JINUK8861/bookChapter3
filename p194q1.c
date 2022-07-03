#include <stdio.h>

int main(void) {
		//문1
	/*
		길이가 5인 int형 1차원 배열 선언
		사용자로부터 총 5개의 정수 입력받은 뒤 다음 내용 출력

		- 입력된 정수 중 최댓값
		- 입력된 정수 중 최솟값
		- 입력된 정수의 총합
	*/

	int arr[5] = { 0, };

	//정수 5개 입력
	for (int i = 0; i < 5; i++) {
		printf("NUM%d : ", i + 1);
		scanf_s("%d", &arr[i]);
	}

	//최댓값 최솟값 총합 초기화
	int max =arr[0], min = arr[0], sum = 0;

	//최댓값 구하고 출력
	for (int i = 0; i < 5; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	printf("최댓값 : %d\n", max);

	//최솟값 구하고 출력
	for (int i = 0; i < 5; i++) {
		if (min > arr[i]) {
			min = arr[i];
		}
	}
	printf("최솟값 : %d\n", min);

	//총합 구하고 출력
	for (int i = 0; i < 5; i++) {
		sum += arr[i];
	}
	printf("총합계 : %d\n", sum);

	return 0;
}