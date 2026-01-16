#include<stdio.h>
int main()
{
    int a;int i;
    scanf("%d",&a);
    
    if(a>0)
    {
        for(i=a;i>=(-a);i--)
        {
            printf("%d ",i);
        }
    }
    else
    {
        for(i=a;i<=a;i++)
        {
            printf("%d ",i);
        }
    }
    return 0;
}