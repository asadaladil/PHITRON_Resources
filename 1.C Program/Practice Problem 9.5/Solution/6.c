#include <stdio.h>

int main()

{
    int i,n,a;

    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(a=1;a<=i;a++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}