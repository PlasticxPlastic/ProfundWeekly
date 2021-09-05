#include<stdio.h>
int i = 2;

int isPrime(int n,int i)
{
    while(i!=n){
        if (n % i == 0) {
            return 0;
        }
        else {
            return isPrime(n,i+1);
        }
    }
    return 1;
}

int main()
{
    int n,a=0;
    scanf("%d", &n);
    if (isPrime(n,i) == 1)
        printf("PRIME NUMBER");
    else 
        printf("NOTPRIME NUMBER");
    return 0;
}