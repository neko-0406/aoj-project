#include <stdio.h>

int main(void) {
    int ret = 0;
    int input_num = 0;

    if (scanf("%d", &input_num) != 1) {
        ret = -1;
    }

    int result = 1;
    for (int i = 0; i < 3; i++) {
        result *= input_num;
    }

    if (ret != -1) {
        printf("%d\n", result);
    }

    return 0;
}