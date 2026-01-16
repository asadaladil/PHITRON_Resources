#include <stdio.h>
#include <string.h>
int main()
{
    char w[1000];
    fgets(w,sizeof(w),stdin);
    int l;
    l=strlen(w)-1;
    int v=0,c=0;

    for(int i=0;i<l;i++)
    {
        if(w[i]=='a'||w[i]=='e'||w[i]=='i'||w[i]=='o'||w[i]=='u')
        {
            v++;
        }
        else
        {
            c++;
        }
    }

    printf("  Vowel - %d\nConsonant - %d\n",v,c);
    return 0;
}