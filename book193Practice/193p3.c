#include <stdio.h>

int main(void) {
		//문3
	/*
		- 출력 결과 예상하기
	*/

	int arr[3][2] = { {6,7},{8,9},{3,4} };
	printf("%d %d \n", arr[1][0], arr[0][1]); // 8(O) 7(O)
	printf("%d %d \n", *(arr[2] + 1), *(arr[1] + 1));
	// == arr[2][1] arr[1][1] == 4(O) 9(O)
	printf("%d %d \n", (*(arr + 2))[0], (*(arr + 0))[1]);
	// == arr[1][0](X) arr[2][0](O)    arr[0][1] == 8(X)3(O) 7(O)
	// HINT) arr 배열에 +를 하면 배열의 한 행을 그대로 건너뛴다.
	// EX) arr + 1 => arr[1][x] && arr +2 => arr[2][x]
	printf("%d %d \n", **arr, *(*(arr + 0) + 0));
	// == *(arr[0][0]) *(arr[0][0] + 0) == 6(O) 6(O)

	return 0;
}