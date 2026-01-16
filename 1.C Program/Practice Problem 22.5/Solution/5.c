#include <stdio.h>

int matrix_multi(int x,int y,int p,int q,int A[x+1][y+1],int B[p+1][q+1])
{
    int i,j,R[x+1][q+1];
    for(i=1;i<=x;i++)
    {
        for(j=1;j<=q;j++)
        {
            R[i][j]=0;
        }
    }
     for(i=1;i<=x;i++)
       {
        for(j=1;j<=q;j++)
        {
            for(int m=1;m<=y;m++) 
            {
                R[i][j]=R[i][j]+A[i][m]*B[m][j];
            }
        }
       }
       printf("\n");
       for(i=1;i<=x;i++)
       {
        for(j=1;j<=y;j++)
        {
            printf("%d ",R[i][j]);
        }
        printf("\n");
       }
    
}
int main()
{
    int a,b,i,j;
    scanf("%d%d",&a,&b);
    printf("\n");
    int A[a+1][b+1];
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=b;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("\n");
    int c,d;
    scanf("%d%d",&c,&d);
    printf("\n");
    int B[c+1][d+1];
    if(b==c)
    {
       for(i=1;i<=c;i++)
       {
            for(j=1;j<=d;j++)
            {
                scanf("%d",&B[i][j]);
            }
       }
       matrix_multi(a,b,c,d,A,B);
    }
    else
    {
        printf("Calculation error");
    }
    return 0;

}