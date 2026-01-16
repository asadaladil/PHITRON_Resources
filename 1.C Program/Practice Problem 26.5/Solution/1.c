#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int* p;
    int* q;
    p=&a;q=&b;
    float g=(*p+*q);
    printf("%.3f\n",g/2);
    return 0;
}