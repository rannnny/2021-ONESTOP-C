// 사용자로부터 두 개의 정수 num1, num2를 입력받자. (이때, num1 > num2 이다.)
// 그리고, num1을 num2로 나누었을 때의 몫과 나머지를 각각 출력하는 프로그램을 작성하여라.

#include <stdio.h>

int main(void) {
	int num1, num2;
	printf_s("num1 num2를 순서대로 입력하세요(num1 > num2)>>");
	scanf_s("%d %d", &num1, &num2);
	printf_s("num1을 num2로 나누었을 때의 몫은: %d\n", num1 / num2);
	printf_s("num1을 num2로 나누었을 때의 나머지는: %d", num1 % num2);
	return 0;
}