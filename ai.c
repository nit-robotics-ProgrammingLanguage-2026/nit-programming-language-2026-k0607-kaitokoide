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

    for (int first = 0; first <= 50; first++) {
        for (int second = 0; second <= 50; second++) {
            if (first != second && first + second == n) {
                count++;
            }
        }
    }

    printf("%d", count);
    return 0;
}