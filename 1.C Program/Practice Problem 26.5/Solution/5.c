#include<stdio.h>
int zero_sum(int A[],int x)
{
    int sum=0;
    for(int i=0;i<x;i++)
    {
        if(A[i]%10==0)
        {
            sum=sum+A[i];
        }
    }
    return sum;
}
int main()
{
    int a;
    scanf("%d",&a);
    int A[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&A[i]);
    }
    int sum=zero_sum(A,a);
    printf("%d",sum);
    return 0;
}