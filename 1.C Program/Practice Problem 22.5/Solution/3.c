#include <stdio.h>
#include <string.h>

char sentence(int n,char R[][1000])
{
    for(int i=0;i<n;i++)
    {
        printf("%s ",R[i]);
    }
    
}
int main()
{
    int n;
    scanf("%d",&n);
    char R[n][1000];
    for(int i=0;i<n;i++)
    {
        scanf("%s",&R[i]);
    }
    printf("\n");
    sentence(n,R);
    return 0;
}