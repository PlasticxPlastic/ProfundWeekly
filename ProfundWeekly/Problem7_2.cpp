#include<stdio.h>
#include<iostream>
#include<vector>

int main()
{
    char card[3];
    printf("Enter your card as form if your card is 10 please input as J or K or Q or if you have only 2 card pls input card 3 as 0 and if your card have A please input as A(card1 card2 card3) : ");
    scanf("%c %c %c",&card[0],&card[1],&card[2]);
    int total;
    int aces;

    for(int i = 0;i<3;i++)
    {
        if('2' <= card[i] && card[i] <= '9')
        {
            total+=card[i]-'0';
        }
        else if(card[i] == 'J'||card[i] == 'K'||card[i] == 'Q')
        {
            total += 10;
        }
        else if(card[i] == 'A')
        {
            total += 11;
            aces++;
        }
    }
    if(total>21 && aces > 0 )
    {
        for(int i = 0; i< aces;i++)
        {
            total = total - 10;
            if(total <= 21)
            {
                break;
            }
        }
    }
    if(total > 21)
    {
        printf("false");
    }
    else if(total <= 21)
    {
        printf("true");
    }
    
}
