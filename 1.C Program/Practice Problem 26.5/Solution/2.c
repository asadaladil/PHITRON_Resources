#include<stdio.h>
void bubble_sort(int A[],int x)
{
    for(int i=1;i<=x;i++)
    {
        for(int j=0;j<x;j++)
        {
            if(j==(x-1))
            {
                break;
            }
            else if(A[j]>A[j+1])
            {
                int a=A[j];
                A[j]=A[j+1];
                A[j+1]=a;
            }
        }
    }
    for(int i=0;i<x;i++)
    {
        printf("%d ",A[i]);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int R[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&R[i]);
    }
    bubble_sort(R,n);
    return 0;

}