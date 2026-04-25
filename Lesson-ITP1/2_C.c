#include <stdio.h>

int main(void) {

    int a, b, c;

    scanf("%d%d%d", &a, &b, &c);

    if (a > b) {
        int temp = b;
        b = a;
        a = temp;
    }
    if (b > c) {
        int temp = c;
        c = b;
        b = temp;
    }
    if (a > b) {
        int temp = b;
        b = a;
        a = temp;
    }

    printf("%d %d %d\n", a, b, c);
    return 0;
}