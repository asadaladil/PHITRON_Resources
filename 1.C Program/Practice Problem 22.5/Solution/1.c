#include <stdio.h>
#include <string.h>

void binary(char R[])
{
    int len=strlen(R),a=0;
    for(int i=0;i<len;i++)
    {
        if(R[i]=='0'||R[i]=='1')
        {
            a++;
        }
        else
        {
            printf("NO\n");
            return;
        }
    }
    if(a==len)
    {
        printf("YES\n");
        return;
    }
}
int main()
{
    char R[1000];
    scanf("%s",R);
    binary(R);
}