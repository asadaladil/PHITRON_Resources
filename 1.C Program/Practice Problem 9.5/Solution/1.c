#include<stdio.h>

int main()

{
    int n,i,R[n+1];
    printf("Enter your value: ");

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%dth value: ",i+1);
        scanf("%d",&R[i]);
    }

    for(i=(n-1);i>=0;i--)
    {
        printf("%d ",R[i]);
    }

    return 0;

}