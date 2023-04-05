#include <stdio.h>

int main(void) {
    char a,b,c;
    int result = 0;
    scanf("%c%c%c",&a, &b, &c);
    if (a == '1') {
        result += 1;
    }
    if (b == '1') {
        result += 1;
    }
    if (c == '1') {
        result += 1;
    }
    printf("%d\n", result);
    return 0;
}