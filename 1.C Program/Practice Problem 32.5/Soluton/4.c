#include<stdio.h>
void print(int n)
{
    printf("%d ",n);
    if(n==1)
    {
        return;
    }
    print(n-1);
}
int main()
{
    int a;
    scanf("%d",&a);
    print(a);
    return 0;
}