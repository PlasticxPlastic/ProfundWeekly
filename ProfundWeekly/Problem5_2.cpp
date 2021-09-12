#include<stdio.h>
#include <ctype.h> 

int main()
{
    char A[100];
    char *p;
    char z[100];
    printf("Enter your text : ");
    scanf("%s", &A);
    p = A;
    int i=0;
    printf("Your Inverse Uppercase Lowercase is : ");
    while(*p != '\0')
    {
        if(*p >= 'A' && *p <= 'Z')
            printf("%c", tolower(*p));
        else if(*p >= 'a' && *p <= 'z')
            printf("%c", toupper(*p));
        else
            printf("%c", *p);
        *p++;
    }
}