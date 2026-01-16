#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int A[a+1];
    for(int i=1;i<=a;i++)
    {
        scanf("%d",&A[i]);
    }
    for(int i=1;i<=a;i++)
    {
        printf("%d ",*(A+i));
    }
    return 0;

    
}