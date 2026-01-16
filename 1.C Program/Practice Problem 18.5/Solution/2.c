#include <stdio.h>
int main()
{
    int a,i,j,s;
    scanf("%d",&a);

    for(i=a;i>=1;i--)
    {
        for(j=1;j<=(i-1);j++)
        {
            printf(" ");
        }
        for(j=1;j<=a;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}