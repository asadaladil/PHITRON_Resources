#include <stdio.h>
int main()
{
    int r,c,i,j,a;

    scanf("%d%d",&r,&c);

    int R[r+1][c+1],U[r+1][c+1],M[r+1][c+1];

    if(r==c)
    {
        printf("\n");
        for(i=1;i<=r;i++)
        {
            for(j=1;j<=c;j++)
            {
                M[i][j]=0;
            }
        }
        for(i=1;i<=r;i++)
        {
            for(j=1;j<=c;j++)
            {
                scanf("%d",&R[i][j]);
            }
        }
        printf("\n");
        for(i=1;i<=r;i++)
        {
            for(j=1;j<=c;j++)
            {
                scanf("%d",&U[i][j]);
            }
        }
        for(i=1;i<=r;i++)
        {
            for(j=1;j<=c;j++)
            {
                for(int a=1;a<=r;a++)
                {
                    M[i][j]=M[i][j]+R[i][a]*U[a][j];
                }
            }
        }
        printf("\n");
        for(i=1;i<=r;i++)
        {
            for(j=1;j<=c;j++)
            {
                printf("%d ",M[i][j]);
            }
            printf("\n");
        }


    }
    else
    {
        printf("Row & Column have to be same for this mulplication");
    }
    return 0;


}
