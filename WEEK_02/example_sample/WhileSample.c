#include <stdio.h>

int main(void) {
    int n = 0, sum = 0;
    scanf_s("%d", &n);
    while (n > 5) {
        printf_s("%d\n", n);
        n--;
    }
}