#include<stdio.h>
int R[10000],sum=0;
int last_digit(int a)
{
    sum=sum+R[a]%10;
    if(a==0)
    {
        return sum;
    }
    a=last_digit(a-1);
}
int main()
{
    int a;
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        scanf("%d",&R[i]);
    }
    printf("%d",last_digit(a-1));
}