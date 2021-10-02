#include <stdio.h>


int main(void) {
	int a = 10;
	int b = 20;

	int* p;
	p = &b;

	int* q;
	q = &a;

	printf("%d, %d", *p, *q);

	return 0;

}