#include<stdio.h>

FILE *in;
FILE *out;

void leap_year(int n)
{
    if(n%4==0&&n%100!=0||n%400==0)
    {
        fprintf(out,"%d-->YES\n",n);
    }
    else
    {
        fprintf(out,"%d-->NO\n",n);
    }
}
int main()
{
    in=fopen("input6.txt","r");
    out=fopen("output6.txt","a");
    
    int n;
    fscanf(in,"%d",&n);
    leap_year(n);
    return 0;
}