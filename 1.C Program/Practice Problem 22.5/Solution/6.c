#include<stdio.h>

void rook(int R[9][9],int a)
{
    int i,j,b=0;
     for(i=1;i<=a;i++)
    {
        for(j=i+1;j<=a;j++)
        {
            if(R[i][1]==R[j][1])
            {
                R[i][1]=0;R[j][1]=0;
            }
            if(R[i][2]==R[j][2])
            {
                R[i][2]=0;R[j][2]=0;
            }
        }        
    }
    for(i=1;i<=a;i++)
    {
        if(R[i][1]==0||R[i][2]==0)
        {
            R[i][1]=0;R[i][2]=0;
        }
    }
    for(i=1;i<=a;i++)
    {       
        if(R[i][1]==0&&R[i][2]==0)
        {
            b++;
        }
    }
    printf("Safe rooks - %d\n",a-b);
    for(i=1;i<=a;i++)
    {
        printf("  ");
        for(j=1;j<=2;j++)
        {
            if(R[i][j]==0)
            {
                continue;
            }
            else 
            {
                printf("%d ",R[i][j]);
            }
        }
        printf("\n");
    }
}
int main()
{
    int R[9][9];
    int i,j,a,b=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=2;j++)
        {
            scanf("%d",&R[i][j]);
        }
    }
    rook(R,a);
    return 0;
}