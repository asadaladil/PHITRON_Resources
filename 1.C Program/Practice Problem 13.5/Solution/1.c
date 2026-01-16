#include <stdio.h>
#include <string.h>
int main()
{
    char w[1000];
    fgets(w,sizeof(w),stdin);
    int l=strlen(w)-1;
    int v[1000],i,j,m=0;

    for(i=0;i<1000;i++)
    {
        v[i]=0;
    }

    for(i=0;i<l;i++)
    {
        v[w[i]]++;
    }
    int max;
    max=v[0];
    for(i=1;i<1000;i++)
    {
        if(max<v[i])
        {
            max=v[i];
        }
    }
    for(j=max;j>=1;j--)
    {
        for(i=0;i<1000;i++)
        {
            if(v[i]==j)
            {
                for(m=1;m<=j;m++)
                {
                    printf("%c",i);
                }
            }
        }
    }
    return 0;
}