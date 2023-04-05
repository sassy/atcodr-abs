#include <stdio.h>

int main(void)
{
    int n = 0;
    int a[201];
    int result = 0;
    int indivisible = 0;
    int i;

    scanf("%d", &n);
    for (i = 0;i < n; i++) {
        scanf("%d", &a[i]);
    }
    for(;;) {
        for (i = 0; i < n; i++) {
            if(a[i] % 2 != 0) {
                indivisible = 1;
            } else {
                a[i] /= 2;
            }            
        }
        if (indivisible) {
            break;
        }
        result++;
    }
    printf("%d\n", result);
    
    return 0;
}