#include<stdio.h>

int main()
{
    int x, y, n;
    int u;
    scanf("%d %d %d", &x, &y, &n);
    if (n > 0)
    {
        int d = y - x;
        for (int i = 1; i <= n; i++)
        {
            u = x + d;
            x = u;
        }
        printf("%d", u);
    }
}