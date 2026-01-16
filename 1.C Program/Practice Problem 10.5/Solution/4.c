#include <stdio.h>

int main()

{
    int n,i,min,b;
    
    printf("Enter your value:\n");
    scanf("%d",&n);
    int R[n+1];
    int a;

    for(i=1;i<=n;i++)
    {
        scanf("%d",&R[i]);
    }

   for(i=1;i<=n;i++)
   {
       for(b=i+1;b<=n;b++)
       {
           if(R[i]>R[b])
           {
                min=R[b];
                R[b]=R[i];
                R[i]=min;
           }
       }
   }
   scanf("%d",&a);
   
    for(i=1;i<=n;i++)
    {
        if(i==a)
        {
            printf("%d",R[i]);
            break;
        }
    }
   
    return 0;
}