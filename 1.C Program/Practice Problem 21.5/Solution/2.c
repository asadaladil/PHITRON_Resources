#include <stdio.h>

void pattern(int x)
{
    for(int i=x;i>=1;i--)
    {
        if((x-i)>0)
        {
            for(int j=1;j<=(x-i);j++)
            {
                printf(" ");
            }
        }
        for(int j=1;j<=(2*i-1);j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    int a;
    scanf("%d",&a);
    pattern(a);
    return 0;
}