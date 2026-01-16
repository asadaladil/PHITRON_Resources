#include<stdio.h>
int g,b=1;
int power(int n)
{
    b=b*g;
    if(n==1)
    {
        return b;
    }
    n=power(n-1);
}
int main()
{
    int a;
    scanf("%d%d",&g,&a);
    printf("%d",power(a));
    return 0;
}