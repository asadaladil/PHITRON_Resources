#include <stdio.h>

int main()

{
    int a,b,i;

    scanf("%d%d",&a,&b);

    for(i=1;i<=a;i++)
    {
        if(i%b==0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}