#include <stdio.h>

int main()

{
    int a,n,R[n+1],i;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&R[i]);
    }

    for(i=1;i<=n;i++)
    {
        printf("%d-",i);
        for(a=1;a<=n;a++)
        {
           if(i==a)
           {
            continue;
           }
           else
           {
            printf("%d ",R[a]);
           }
        }
        printf("\n");
    }
    return 0;
}