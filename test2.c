#include <stdio.h>

int main(void) {
		//194p 문2
	/*
		길이가 8인 int형 1차원 배열 선언
		정수 8개 입력받아 배열에 저장한 뒤, 홀수와 짝수를 구별하여 출력하는 프로그램 작성

		실행 예시)
		홀수 : 1 3 5 7
		짝수 : 2 4 6 8
	*/

	int arr[8];

	//배열요소 입력 저장
	for (int i = 0; i < 8; i++) {
		printf("%d번째 요소 : ", i+1);
		scanf_s("%d", &arr[i]);
	}
	// (배열요소 검산)
	printf("배열의 요소는 ");
	for (int i = 0; i < 8; i++) {
		printf("%d ", arr[i]);
	}
	printf("입니다.\n");

	//홀수 짝수 나누어 출력
	printf("홀수 : ");
	for (int i = 0; i < 8; i++) {
		if (arr[i] % 2 == 1) {
			printf("%d ", arr[i]);
		}
	}
	printf("\n");
	printf("짝수 : ");
	for (int i = 0; i < 8; i++) {
		if (arr[i] % 2 == 0) {
			printf("%d ", arr[i]);
		}
	}

	return 0;
}