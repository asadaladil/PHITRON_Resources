#include <stdio.h>

int main()

{
    int a,b,i,n,R[n+1],c;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&R[i]);
    }
    scanf("%d",&a);

    for(i=0;i<=(n-1);i++)
    {
        for(b=0;b<=(n-1);b++)
        {
            if(b==i)
            {
                continue;
            }  
            else
            {
                c=R[i]+R[b];
                if(c==a)
                {
                    break;
                }
            } 
           
            
        }
    }

    if(c==a)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}