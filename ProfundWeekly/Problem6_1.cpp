#include<stdio.h>

int main()
{
    int number;

    float x, sqrt;
    scanf("%d", &number);
    sqrt = number / 2;
    x = 0;
    while(sqrt != x){
        x = sqrt;
        sqrt = ( number/x + x) / 2;
    }

    printf("%.5f",sqrt);
}
