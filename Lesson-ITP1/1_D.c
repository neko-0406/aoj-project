#include <stdio.h>

int main(void) {

    int seconds = 0;

    scanf("%d", &seconds);

    // 時間を算出
    int hour = seconds / 3600;
    seconds %= 3600;

    // 分を算出
    int minutes = seconds / 60;
    seconds %= 60;

    printf("%d:%d:%d\n", hour, minutes, seconds);
    return 0;
}