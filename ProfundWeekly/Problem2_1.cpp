#include <stdio.h>

int main()
{
    int a;
    int l;
    int u;
    scanf("%d", &a);
    int x = (2*a)-1;
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=x;j++)
        {
            if(j<i)
            {
                printf("*");
                l = l + 1;
            }
            else
            {
                printf(" ");
            }
            
        }
        for(int i=1;i<=l;i++)
        {
            printf("*");
        }
        x = x - 1;
        u = x;
        l = 0;
        printf("\n");
    }
    for(int i=1;i<=(2*a)-1;i++)
    {
        printf("*");
    }
    printf("\n");
    for(int i = a-1;i>=1;i--)
    {
        for(int j=0;j<=u;j++)
        {
            if(j<i)
            {
                printf("*");
                l = l + 1;
            }
            else 
            {
                printf(" ");
            }
        }
        for(int i=1;i<=l;i++)
        {
            printf("*");
        }
        u = u + 1;
        l = 0;
        printf("\n");
    }
}