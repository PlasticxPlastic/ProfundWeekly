#include<stdio.h>
#include<string.h>

int main()
{
    char A[100];
    int x,check = 0,digit=0,digitcheck=0,numbercharacter=0,checkX;
    scanf("%s",A);
    int l = strlen(A);
    for(int i=0;i<l;i++)
    {
        if(A[i] >= '0' && A[i] <= '9')
        {
            while(A[i+check] >= '0' && A[i+check] <= '9')
            {
                digitcheck += 1;
                check += 1;
                checkX = check;
            }
            check = 0;
            switch (A[i])
            {
            case '0':
                if(digitcheck-1 != 0){
                    numbercharacter = (digitcheck-1)*10 * 0;
                    break;
                }
                else if(digitcheck-1 == 0){
                    numbercharacter = (digitcheck-1)*10 + 0;
                    break;
                }
            case '1':
                if(digitcheck-1 != 0){
                    numbercharacter = (digitcheck-1)*10 * 1;
                    break;
                }
                else if(digitcheck-1 == 0){
                    numbercharacter = (digitcheck-1)*10 + 1;
                    break;
                }
            case '2':
                if(digitcheck-1 != 0){
                    numbercharacter = (digitcheck-1)*10 * 2;
                    break;
                }
                else if(digitcheck-1 == 0){
                    numbercharacter = (digitcheck-1)*10 + 2;
                    break;
                }
            case '3':
                if(digitcheck-1 != 0){
                    numbercharacter = (digitcheck-1)*10 * 3;
                    break;
                }
                else if(digitcheck-1 == 0){
                    numbercharacter = (digitcheck-1)*10 + 3;
                    break;
                }
            case '4':
                if(digitcheck-1 != 0){
                    numbercharacter = (digitcheck-1)*10 * 4;
                    break;
                }
                else if(digitcheck-1 == 0){
                    numbercharacter = (digitcheck-1)*10 + 4;
                    break;
                }
            case '5':
                if(digitcheck-1 != 0){
                    numbercharacter = (digitcheck-1)*10 * 5;
                    break;
                }
                else if(digitcheck-1 == 0){
                    numbercharacter = (digitcheck-1)*10 + 5;
                    break;
                }
            case '6':
                if(digitcheck-1 != 0){
                    numbercharacter = (digitcheck-1)*10 * 6;
                    break;
                }
                else if(digitcheck-1 == 0){
                    numbercharacter = (digitcheck-1)*10 + 6;
                    break;
                }
            case '7':
                if(digitcheck-1 != 0){
                    numbercharacter = (digitcheck-1)*10 * 7;
                    break;
                }
                else if(digitcheck-1 == 0){
                    numbercharacter = (digitcheck-1)*10 + 7;
                    break;
                }
            case '8':
                if(digitcheck-1 != 0){
                    numbercharacter = (digitcheck-1)*10 * 8;
                    break;
                }
                else if(digitcheck-1 == 0){
                    numbercharacter = (digitcheck-1)*10 + 8;
                    break;
                }
            case '9':
                if(digitcheck-1 != 0){
                    numbercharacter = (digitcheck-1)*10 * 9;
                    break;
                }
                else if(digitcheck-1 == 0){
                    numbercharacter = (digitcheck-1)*10 + 9;
                    break;
                }
            default:
                break;
            }
            digitcheck--;
            for(int k=1;k<=numbercharacter;k++)
            {
                printf("%c",A[i+checkX]);
            }
            check = 0;
            digitcheck = 0;
            numbercharacter = 0;
            checkX = 0;

        }
        else if(A[i] >= 'A' && A[i] <= 'z')
        {
            if(i>0)
            {
                if(A[i-1] >= 'A' && A[i-1] <= 'z')
                {
                    printf("%c",A[i]);
                }
            }
            else if(i == 0)
            {
                printf("%c",A[i]);
            }
            
        } 
    }
}
