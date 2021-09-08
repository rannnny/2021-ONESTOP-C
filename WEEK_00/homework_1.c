#include <stdio.h>

// 숙제 1
// VS에서 실행시키고 실행 결과 캡처하기

int main(void) {
	int i;
	float x;

	i = 40;
	x = 839.21f;
	
	printf_s("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
	printf_s("|%10.3f|%10.3e|%-10g|\n", x, x, x);

	return 0;
}
