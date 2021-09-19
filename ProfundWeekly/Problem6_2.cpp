#include<stdio.h>
int main()
{
    int num,i=1,T,H,j=1,digit;
    scanf("%d",&num);
    
    while(i*i < num) // find largest pow2 that below than num
    {
        i++;
    }
    if(i*i == num)
    {
        printf("%d",i);
    }
    else
    {
        i = i-1;
        printf("%d.",i); // printตัวหน้าทศนิยม

        T = 2 * i;//ตัวตั้ง
        H = num - (i*i); // ตัวหาร
        while( j <= 5)//เอา5ตำแหน่ง
        {
            H = H*100;
            digit = 0;
            while((T*10+digit) * digit<H)
            {
                digit = digit + 1;
            }
            digit = digit-1;
            printf("%d",digit);
            H = H-((T*10+digit)*digit);
            T = T * 10 + 2 * digit;
            j = j + 1;
        }
    }
    
}
