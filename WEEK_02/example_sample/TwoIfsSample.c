#include <stdio.h>

int main(void) {
    int score;
    scanf_s("%d", &score);
    if (score > 90) {
        if (score > 98) printf_s("A+");
        else printf_s("A");
    }
    return 0;
}