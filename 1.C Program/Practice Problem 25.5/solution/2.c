#include<stdio.h>
void sorting(int R[],int x,int y)
{
    for(int i=0;i<x;i++)
    {
        for(int j=i+1;j<x;j++)
        {
            if(R[i]>R[j])
            {
                int a=R[i];
                R[i]=R[j];
                R[j]=a;
            }
        }
    }
    printf("%dth largest number=%d\n",y,largest(R,x,y));
    printf("%dth smallest number=%d",y,smallest(R,y));
}
int largest(int R[],int x,int y)
{
    for(int i=(x-1);i>=0;i--)
    {
        if(i==(x-y))
        {
            return R[i];
        }
    }
}
int smallest(int A[],int y)
{
    return A[y-1];
}
int main()
{
    int a;
    scanf("%d",&a);
    int R[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&R[i]);
    }
    int b;
    scanf("%d",&b);
    sorting(R,a,b);
}