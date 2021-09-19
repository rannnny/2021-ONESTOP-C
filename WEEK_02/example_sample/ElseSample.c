#include <stdio.h>

int main(void) {
    int num;
    scanf_s("%d", &num);
    if (num == 0) {
        printf_s("입력받은 수는 0");
    }
    else {
        printf_s("입력받은 수는 0이 아닌 수");
    }
    return 0;
}