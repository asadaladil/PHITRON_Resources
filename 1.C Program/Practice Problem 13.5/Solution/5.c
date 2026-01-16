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
            R[i][j]=0;
        }
    }
    int a,b,d;
    printf("The elements you want:\n");
    scanf("%d",&a);

    for(i=1;i<=a;i++)
    {
        scanf("%d%d",&b,&d);
        R[b][d]=1;
    }
    int e=0;
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            if(R[i][j]==0)
            {
                e++;
            }
        }
    }
    printf("Total Empty cells-%d\n",e);
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            if(R[i][j]==0)
            {
                printf("  %d %d\n\n",i,j);
            }
        }
    }
    return 0;
}