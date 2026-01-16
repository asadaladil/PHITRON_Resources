#include<stdio.h>
int sum(int x)
{
    if(x>0)
    {
        return x+sum(x-1);
    }
}
int main()
{
    int a;
    scanf("%d",&a);
    printf("%d",sum(a));
    return 0;

}