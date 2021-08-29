#include<stdio.h>

int main()
{
    int a;
    int spaceX=0,spaceY=0;
    int MarkX = 0, MarkY = 0;
    printf("INPUT NUMBER : ");
    scanf("%d", &a);
    int value = (2*a)-1;

    for(int i=1;i<=value;i++)
    {
        for(int space = 1;space<=spaceX;space++)
        {
            printf(" ");
        }
        for(int u=1;u<=(value - MarkX);u++)
        {
            printf("*");
        }
        printf("\n");
        if(spaceY > 0 || spaceX >= a-1)
        {
            spaceY++;
            spaceX--;
        }
        else
        {
            spaceX++;
        }
        if(MarkY > 0 || MarkX == (2*a)-2)
        {
            MarkY = MarkY + 2;
            MarkX = MarkX - 2;
        }
        else 
        {
            MarkX = MarkX + 2;
        }
    }
}