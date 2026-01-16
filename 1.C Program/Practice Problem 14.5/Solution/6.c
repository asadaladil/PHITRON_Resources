#include <stdio.h>
#include <string.h>
#include<math.h>
int main()
{
   int n,i,j;
   scanf("%d",&n);
   int R[n+1][n+1];
   
   for(i=1;i<=n;i++)
   {
    for(j=1;j<=n;j++)
    {
        scanf("%d",&R[i][j]);
    }
   }
   for(i=1;i<=n;i++)
   {
    printf("row-%d and column-%d= ",i,i);
    for(j=1;j<=n;j++)
    {
        if(i==j)
        {
            continue;
        }
        else
        {
            printf("%d ",R[i][j]);
        }
    }
    for(j=1;j<=n;j++)
    {
        if(i==1)
        {
            if(j<=(n-1))
            {
                printf("%d ",R[j+1][i]);
            }
            else
            {
                continue;
            }
        }
        else if(i!=j)
        {
            printf("%d ",R[j][i]);
        }
    }
    printf("\n");
   }


    return 0;

}
