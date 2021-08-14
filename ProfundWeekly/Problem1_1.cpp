#include<stdio.h>

int main()
{
    int x, y, an, d;
    int n;
    scanf("%d %d %d", &x, &y, &n);
    if (n > 0) {
        d = y - x;
        an = x + ((n - 1) * d);
        printf("%d", an);
    }

    return 0;
}