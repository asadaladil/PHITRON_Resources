#include <stdio.h>
int main()

{
   long long int a,b,i,c;

    scanf("%lld%lld",&a,&b);

    for(i=1;i<=b;i++)
    {
        if(a%10!=0)
        {
            a=a-1;
        }
        else if(a%10==0)
        {
            a=a/10;
        }
    }
    printf("%lld",a);
    return 0;
}