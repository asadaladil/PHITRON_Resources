#include<stdio.h>

int main()

{
    int n,i,a=0,R[n+1];
    printf("Enter your value: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&R[i]);
    }

    for(i=0;i<n;i++)
    {
        if(R[i]%2!=0)
        {
            a=a+R[i];
        }
    }

    if(a%2==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}