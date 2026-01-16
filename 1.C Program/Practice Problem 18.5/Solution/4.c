#include<stdio.h>
#include<string.h>
int main()
{
    char R[1000];
    fgets(R,sizeof(R),stdin);
    int len=strlen(R)-1;

    printf("%c",R[0]);
    for(int i=1;i<len;i++)
    {
        if(R[i]==R[i-1])
        {
            continue;
        }
        else
        {
            printf("%c",R[i]);
        }
    }
    return 0;
}