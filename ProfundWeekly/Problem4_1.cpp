#include<stdio.h>  

int main()
{
    int num;
    int count;
    scanf("%d", &num);
    for(int i = 1;i<=num;i++)
    {
        if(num%i == 0)
        {
            count++;
        }
    }
    if(count == 2){
        printf("PRIME NUMBER");
    }
    else{
        printf("NOTPRIME NUMBER");
    }
    return 0;
}