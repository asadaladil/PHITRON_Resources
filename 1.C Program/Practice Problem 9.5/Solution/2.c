#include<stdio.h>

int main()

{
    int i,n,R[n+1];

    printf("Enter your value: ");

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%dth value: ",i);
        scanf("%d",&R[i]);
    }

    int q,a,b;
    printf("How many numbers you want to change: ");
    scanf("%d",&q);

    for(i=0;i<q;i++)
    {
        scanf("%d",&a);
        scanf("%d",&b);
        R[a]=R[a]+b;
    }

    for(i=0;i<n;i++)
    {
        printf("%d ",R[i]);
    }
    return 0;
}