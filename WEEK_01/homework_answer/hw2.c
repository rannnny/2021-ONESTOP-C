// 사용자로부터 정수 n을 입력받은 후, 정수 n의 제곱근 값을 구하자.
// 구한 후, 그 값을 필드 폭 10칸 & 오른쪽 정렬 실수로 출력하는 프로그램을 작성하여라

#include <stdio.h>
#include <math.h>

int main(void) {
	int n;
	printf_s("양의 정수 n을 입력하세요: ");
	scanf_s("%d", &n);
	printf_s("n의 제곱근값은: %10f", sqrt(n));
	return 0;
}