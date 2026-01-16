#include<stdio.h>
#include<string.h>
char even_string(char r)
{
    if(r%2==0)
    {
        return r-32;
    }
    else
    {
        return r;
    }
}
int main()
{
    char R[1000];
    scanf("%s",R);
    int len=strlen(R);
    for(int i=0;i<len;i++)
    {
        R[i]=even_string(R[i]);
    }
    printf("%s",R);
    return 0;
}

