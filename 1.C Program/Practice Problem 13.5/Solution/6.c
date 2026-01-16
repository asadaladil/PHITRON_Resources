#include <stdio.h>
int main()
{
    int r,c,i,j,a;
    scanf("%d%d",&r,&c);
    int R[r][c];
    if(r==c)
    {
        for(i=1;i<=r;i++)
        {
            for(j=1;j<=c;j++)
            {
                scanf("%d",&R[i][j]);
            }
        }
        for(i=1;i<=r;i++)
        {
            for(j=i+1;j<=c;j++)
            {
                int d;
                d=R[i][j];
                R[i][j]=R[j][i];
                R[j][i]=d;
            }
        }
        printf("Transpose Matrix is\n");
        for(i=1;i<=r;i++)
        {
            for(j=1;j<=c;j++)
            {
                printf("%d ",R[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("It is not a square Matrix");
    }
    return 0;
}