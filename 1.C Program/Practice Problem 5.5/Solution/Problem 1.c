#include <stdio.h>

int main()

{
    int a,i;

    printf("Input your value:\n");

    scanf("%d",&a);

    for(i=1;i<=a;i++)
    {
        printf ("%d ",i);
    }
    return 0;
}