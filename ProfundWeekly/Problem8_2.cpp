#include<stdio.h>
void fullPyramid (int r)
{
   int c, space;
   static int stars = -1;

   if (r <= 0) return;

   space = r - 1;
   stars += 2;

   for (c = 0; c < space; c++)
   printf(" "); 
   
   for (c = 0; c < stars; c++)
   printf("*"); 

   printf("\n");

   fullPyramid(--r);
}

int main ()
{
  int n;
  printf("Enter number of rows: ");
  scanf("%d",&n);
  fullPyramid(n);
  return 0;
}
