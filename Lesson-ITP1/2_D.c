#include <stdio.h>

int main(void) {
    // 受け取る値
    int W = 0, H = 0, x = 0, y = 0, r = 0;
    // 円の上下左右の座標を格納する配列
    int place[4];

    scanf("%d%d%d%d%d", &W, &H, &x, &y, &r);

    // 円の4か所の座標
    place[0] = y + r; // 上
    place[1] = y - r; // 下
    place[2] = x + r; // 右
    place[3] = x - r; // 左

    if (H >= place[0] && place[1] >= 0 && W >= place[2] && place[3] >= 0) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}