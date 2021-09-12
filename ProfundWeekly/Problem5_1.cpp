#include<stdio.h>
#include<string.h>

int main()
{
    char A[100],X[100];
    printf("Enter your text : ");
    scanf("%s", &A);
    int l = strlen(A);
    for(int i=0;i<l;i++)
    {
        if(A[i] >= 'A' && A[i] <= 'Z')
        {
            X[i] = A[i] + 32;
        }
        else if(A[i] >= 'a' && A[i] <= 'z')
        {
            X[i] = A[i] - 32;
        }
        else
        {
            X[i] = A[i];
        }
    }
    printf("Your Inverse Uppercase Lowercase is : ");
    printf("%s", X);

}