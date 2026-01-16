#include<stdio.h>
int main()
{
    int i,a;
    scanf("%d",&a);
    char R[a+1][1000];

    for(i=1;i<=a;i++)
    {
       scanf("%s",&R[i]);
    }
    printf("\n");
    for(i=1;i<=a;i++)
    {
        printf("%s ",R[i]);
    }
    printf("\n");
    
    return 0;
}