#include <stdio.h>

void series(int x)
{
    if(x>0)
    {
        for(int i=x;i>=(-x);i--)
        {
            printf("%d ",i);
        }
    }
    else
    {
        for(int i=x;i<=(-x);i++)
        {
            printf("%d ",i);
        }
    }
}
int main()
{
    int a;
    scanf("%d",&a);
    series(a);
    return 0;
}