#include <stdio.h>

int main()
{
    int a;

    printf("Please input your number:");
    scanf("%d",&a);

    if(a%2==0)
    {
        printf("%d is an EVEN number",a);
    }
    else
    {
        printf("%d is an ODD number",a);
    }
    return 0;
}