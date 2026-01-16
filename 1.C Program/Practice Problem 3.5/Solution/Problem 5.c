#include <stdio.h>

int main()
{
    int a,b,c;

    printf("Please input 3 arms value of triangle\n");

    scanf("%d%d%d",&a,&b,&c);

    if(a<=0&&b<=0&&c<=0)
    {
        printf("Invalid Input");
    }
    else if((a+b)>c&&(b+c)>a&&(c+a)>b)
    {
        printf("Triangle will be formed");
    }
    else
    {
        printf("Triangle cannot be formed");
    }

    return 0;
}