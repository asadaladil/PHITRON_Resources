#include<stdio.h>
int summ(int n,int R[])
{
    int y=0;
    for(int i=0;i<n;i++)
    {
        y=y+R[i]%10+R[i]/1000;
    }
    return y;
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
    int y=summ(n,R);
    printf("%d",y);
    return 0;
}