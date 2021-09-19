#include <stdio.h>

int main(void) {
    int num;
    scanf_s("%d", &num);
    if (num < 0) {
        printf_s("입력받은 수는 음수");
    }
    if (num == 0) {
        printf_s("입력받은 수는 0");
    }
    if (num > 0) {
        printf_s("입력받은 수는 양수");
    }
    return 0;
}