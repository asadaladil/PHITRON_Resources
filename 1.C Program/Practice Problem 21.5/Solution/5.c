#include<stdio.h>

int calc(char s,int m,int n)
{
    if(s=='+')
    {
        return (m+n);
    }
    else if(s=='-')
    {
        return (m-n);
    }
    else if(s=='*')
    {
        return m*n;
    }
    else if(s=='/')
    {
        return m/n;
    }
}
int main()
{
    char s;
    int m,n;
    scanf("%c%d%d",&s,&m,&n);
    int y=calc(s,m,n);
    printf("%d",y);
    return 0;
}