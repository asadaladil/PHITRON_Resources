#include <stdio.h>

int main()
{
    int n,i,R[n+100];
    printf("Enter your value: ");
    scanf("%d",&n);
    R[1]=0;
    R[2]=1;

    for(i=1;i<=n;i++)
    {
       R[i+2]=R[i] + R[i+1];
       printf("%d ",R[i]);
    }
    return 0;
}