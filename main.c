#include <stdio.h>

int main(void)
{
    int n;
    int count = 0;

    scanf("%d", &n);

    if (n < 0) {
        printf("NG");
        return 0;
    }

    // 0から50までの整数の組を調べる
    for (int i = 0; i <= 50; i++) {
        for (int j = 0; j <= 50; j++) {

            // iとjが異なり、合計がnになる組を数える
            /* ここに条件判定とcountを増やす処理を記入する */

        }
    }

    printf("%d", count);
    return 0;
}