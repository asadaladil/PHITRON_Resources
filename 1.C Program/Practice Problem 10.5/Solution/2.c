#include <stdio.h>

int main()

{
    int n,i,min,b;
    
    printf("Enter your value: ");
    scanf("%d",&n);
    int R[n+1];

    for(i=0;i<n;i++)
    {
        scanf("%d",&R[i]);
    }

   for(i=0;i<n;i++)
   {
       for(b=i+1;b<n;b++)
       {
           if(R[i]>R[b])
           {
                min=R[b];
                R[b]=R[i];
                R[i]=min;
           }
       }
   }
   
    for(i=0;i<n;i++)
    {
        printf("%d ",R[i]);
    }
   
    return 0;
}