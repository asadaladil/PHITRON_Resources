#include<stdio.h>

FILE *in;
FILE *out;

void hash_print(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=(n-i);j++)
        {
            fprintf(out," ");
        }
        for(int j=1;j<=n;j++)
        {
            fprintf(out,"#");
        }
        fprintf(out,"\n");
    }
}
int main()
{
    in=fopen("input5.txt","r");
    out=fopen("output5.txt","w");
    int n;
    fscanf(in,"%d",&n);
    hash_print(n);
    return 0;
}