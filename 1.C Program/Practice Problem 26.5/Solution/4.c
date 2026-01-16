#include<stdio.h>
float Pi=3.1416;
void circle_area(int x)
{
    float a;
    a=Pi*x*x;
    printf("%f",a);
}
int main()
{
    int a;
    scanf("%d",&a);
    circle_area(a);
    return 0;
}