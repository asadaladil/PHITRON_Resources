#include <stdio.h>
int main()

{
    int n,R[n+1],i,r;

    printf("Enter your value: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&R[i]);
    }

   for(i=0;i<n;i++)
   {
    if(R[i]-R[0]==0)
    {
        r++;
    }
   }

   if(r==n)
   {
    printf("YES");
   }
   else
   {
    printf("NO");
   }
    
    return 0;
}