#include <stdio.h>

void sorting(int n,int A[])
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(A[i]>A[j])
            {
                int x=A[i];
                A[i]=A[j];
                A[j]=x;
            }
        }
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    sorting(n,A);
    for(int i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
    return 0;
}