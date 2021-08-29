    #include <stdio.h>  
      
    int main()  
    {  
        int n,m=1;  
        printf("INPUT NUMBER : ");
        scanf("%d",&n);  
      
       for(int i=n;i>1;i--)  
       {  
           for(int j=1;j<m;j++)  
           {  
               printf(" ");  
           }  
           for(int k=1;k<=2*i-1;k++)  
           {  
               printf("*");  
           }  
           m++;  
         
          printf("\n");  
        }  
        int u;
        u = n;
        for(int x = 1;x<=n;x++)
        {
            for(int y=1;y<=u-1;y++)
            {
                printf(" ");
            }
            for(int l=1;l<=2*x-1;l++)
            {
                printf("*");
            }
            u--;
            printf("\n");
        }  
        return 0;
    }  