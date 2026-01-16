#include <stdio.h>

int main()
{
    int a;

    printf("Please input your obtain number:");
    scanf("%d",&a);

    if(a>=0&&a<=32)
    {
        printf("F Grade");
    }
    else if(a>=33&&a<=39)
    {
        printf("D Grade");
    }
    else if(a>=40&&a<=49)
    {
        printf("C Grade");
    }
    else if(a>=50&&a<=59)
    {
        printf("B Grade");
    }
    else if(a>=60&&a<=69)
    {
        printf("A- Grade");
    }
    else if(a>=70&&a<=79)
    {
        printf("A Grade");
    }
    else if(a>=80&&a<=100)
    {
        printf("A+ Grade");
    }
    else
    {
        printf("Invalid Input");
    }
    return 0;
}