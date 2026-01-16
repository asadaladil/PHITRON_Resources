#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d",&d);
    a=d%4;b=d%100;c=d%400;
    if(a==0&&b!=0||c==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}