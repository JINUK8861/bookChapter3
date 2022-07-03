#include <stdio.h>

int main(void) {
		//문1
	/*
		행 3, 열 3인 char형 2차원 배열 bingo를 선언, 그림과 같이 저장되도록 프로그램 작성
		단, 선언과 초기화를 동시에 하지 말 것

		그림)
		O X X
		X O X
		X X O
	*/

	char bingo[3][3];

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (i == j) {
				bingo[i][j] = 'O';
			}
			else {
				bingo[i][j] = 'X';
			}
		}
	}

	// + 출력하기
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%c ", bingo[i][j]);
		}
		printf("\n");
	}

	return 0;
}