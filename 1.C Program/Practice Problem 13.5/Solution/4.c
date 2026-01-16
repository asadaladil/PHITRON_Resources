#include <stdio.h>
int main()
{
    int r,c,i,j;
    scanf("%d%d",&r,&c);
    int R[r][c];

   for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            scanf("%d",&R[i][j]);
        }     
    }
    int a;
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            scanf("%d",&a);
            R[i][j]=R[i][j]+a;
        }
    }
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            printf("%d ",R[i][j]);
        }
        printf("\n");
    }
    return 0;    
}