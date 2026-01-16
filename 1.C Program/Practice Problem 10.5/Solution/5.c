#include <stdio.h>

int main()
{
    int n,i,a,b=0,v;
    printf("Enter your value:\n");

    scanf("%d",&n);

    int R[n+1],B[n+1];

    for(i=0;i<n;i++)
    {
        scanf("%d",&R[i]);
    }

    for(i=0;i<n;i++)
    {
        B[i]=0;
    }

    for(i=0;i<n;i++)
    {
        v=0;
        if(R[i]==2)
        {
            b++;
            B[i]=R[i];
        }
        else
        {
        for(a=2;a<R[i];a++)
        {
            if(R[i]%a==0)
            {
                v=1;
            }
           
        }
        if(v==0)
        {
            b++;
            B[i]=R[i];
        }
       
      
    }
    }
    printf("Prime number = %d\n",b);
    printf("They are ");
    for(i=0;i<n;i++)
    {
        if(B[i]==0 || B[i]==1)
        {
            continue;
        }
        else
        {
            printf("%d ",B[i]);
        }
    }
    printf("\n");

    return 0;
}