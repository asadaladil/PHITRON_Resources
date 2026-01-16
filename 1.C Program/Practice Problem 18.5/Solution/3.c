#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int R[a+1],i,j=0;

    for(i=1;i<=a;i++)
    {
        scanf("%d",&R[i]);
        R[i]=R[i]%10;
        j=j+R[i];
    }
    printf("sum = %d",j);
    return 0;
    


}