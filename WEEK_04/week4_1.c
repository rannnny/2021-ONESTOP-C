#include <stdio.h>


void print_one_row(void) {
	int i;
	for (i = 1; i <= 10; i++)
		printf("*");
}

void print_all_rows(void) {
	int j;
	for (j = 1; j <= 10; j++) {
		print_one_row();
		printf("\n");
	}
}

int main(void) {
	print_all_rows();
	return;
}

/*전역변수였던 i와 j를 지역변수로 선언해주면 됩니다. 그런데 왜인지는 모르겠어요ㅠ*/