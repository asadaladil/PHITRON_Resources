#include <stdio.h>

int main()

{
   int n,r,s,c;
   printf("Enter your row: ");

   scanf("%d",&r);

   for(n=r;n>=1;n--)
   {
    for(s=(r-n);s>=1;s--)
    {
        printf(" ");
    }
    for(c=1;c<=n;c++)
    {
        printf("%d ",c);
    }
    printf("\n");
   }
   return 0;
}