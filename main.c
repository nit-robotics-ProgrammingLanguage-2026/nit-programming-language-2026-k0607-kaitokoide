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

    // iとjをそれぞれ0から50まで調べる
    for (int i = 0; i <= 50; i++) {
        for (int j = 0; j <= 50; j++) {

            // iとjが異なり、合計がnになる組を数える
            if (i != j && i + j == n) {
                count++;
            }
        }
    }

    printf("%d", count);
    return 0;
}