#include<stdio.h>
void inverse(int a)
{
    if(a>0)
    {
        printf("%d ",a);
        return inverse(a-1);
    }

}
int main()
{
    int a;
    scanf("%d",&a);
    inverse(a);
    return 0;
}