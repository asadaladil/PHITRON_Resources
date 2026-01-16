#include<stdio.h>
int count(int A[],int x,int y)
{
    int a=0;
    for(int i=0;i<y;i++)
    {
        if(A[i]>x)
        {
            a++;
        }
        if(A[i]<x)
        {
            a++;
        }
    }
    return a;
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
    int b;
    scanf("%d",&b);
    int c=count(A,b,a);
    printf("\n%d",c);
    return 0;
}