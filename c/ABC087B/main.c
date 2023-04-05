#include <stdio.h>

int main(void)
{
    int a, b, c, x;
    int i, j, k;
    int result = 0;
    int result2 = 0;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &x);

    if (x / 500 >= 0)
    {
        for (i = 0; i <= a; i++) {
            if ( (x - (500 * i)) / 100 >= 0)
            {
                for (j = 0; j <= b; j++) {
                    k =  (x - ((500 * i) + (100 * j))) / 50;
                    if (k >= 0 && k <= c && 500 * i + 100 * j + 50 * k == x) {
                        result++;
                    }
                }
            }
        }
    }

    printf("%d\n", result);
    return 0;
}