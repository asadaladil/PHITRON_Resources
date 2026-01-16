#include <stdio.h>

int main()

{
    int a,b,i,d;

    scanf("%d%d",&a,&b);

    int sum=0,c=101;

    for(i=1;i<=(a*b);i++)
    {

        sum=sum+c;
        c++;
       if(i%b==0)
       {
         c=c+(100-b);
       }
    }
    printf("%d",sum);

    return 0;
}