#include <stdio.h>
#include <string.h>
int main()
{
    char w[1000];
    fgets(w,sizeof(w),stdin);
    int l=strlen(w)-1;
    char v[1000];
    int m=0,n=0;
    
    for(int i=(l-1);i>=0;i--)
    {
        v[m]=w[i];
        m++;
    }
    for(int i=0;i<l;i++)
    {
        if(w[i]==v[i])
        {
            n++;
        }
        else
        {
            printf("NO");
            break;
        }
    }
    if(n==l)
    {
        printf("YES");
    }
    return 0;
}