#include<stdio.h>
int main()
{
    int a,b,c,s;
    scanf("%d%d%d",&a,&b,&c);
    int *p,*q,*r;
    p=&a;
    q=&b;
    r=&c;
    s=*p+*q+*r;
    printf("%d",s);
    return 0;

}