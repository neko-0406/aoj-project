#include <stdio.h>

int main(void) {

    int height = 0;
    int width = 0;

    int ret = 0;

    if (scanf("%d%d", &height, &width) != 2) {
        ret = -1;
    }

    if (ret != -1) {
        // 周の長さ
        int circumference = height * 2 + width * 2;
        // 面積
        int surface = height * width;

        printf("%d %d\n", surface, circumference);
    }

    return 0;
}