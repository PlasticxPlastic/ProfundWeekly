#include<stdio.h>
#include<math.h>

int main()
{
    char card[3];
    printf("Input your card in term (card1 card2 card3) p.s. character must be a capital letter and if you want 2 card plese input card 3 as 0 and if you have 'A' card plese input 1 : ");
    scanf("%c %c %c",&card[0],&card[1],&card[2]);
    int total = 0;
    for(int i = 0;i<3;i++)
    {
        if('1'<=card[i] && card[i] <= '9')
            if(card[i] == '1'&& i==1 && card[i+1] == '0' && (card[i-1] == 'J'||card[i-1] == 'K'||card[i-1] == 'Q'))
            {
                total += card[i] - '0' + 10;
            }
            else if(card[i] == '1'&& i==0 && card[i+2] == '0' && (card[i+1] == 'J'||card[i+1] == 'K'||card[i+1] == 'Q'))
            {
                total += card[i] - '0' + 10;

            }
            else
            {
                total += card[i] - '0';
            }
        else if(card[i] == 'J'||card[i] == 'K'||card[i] == 'Q')
            total += 10;
    }
    if(total > 21)
        printf("false");
    else if(total < 21)
        printf("true");
    else if (total == 21)
        printf("Black Jack!!!");
}
