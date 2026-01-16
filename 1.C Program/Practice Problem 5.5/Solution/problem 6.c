#include <stdio.h>

int main()

{
    int a,b,i,c,d;
    
    scanf("%d%d",&a,&b);

    
        if(a>b)
        {
            for(c=a;c<=23;c++)
            {
                printf("%d ",c);
            }
            for(d=0;d<=b;d++)
            {
                printf("%d ",d);
            }
        }
        else
        {
           for(i=a;i<=b;i++)
           {
            printf("%d ",i);
           }
        }
    
    return 0;
}