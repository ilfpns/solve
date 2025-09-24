#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    int a, b, c, d;
    while (scanf("%d %d %d %d", &a, &b, &c, &d) == 4)
        printf("%c\n", "DCBAE"[a + b + c + d]);
}