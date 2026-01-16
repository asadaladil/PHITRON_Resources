#include<stdio.h>
FILE *in;
FILE *out;
void Num_print(int n)
{
    if(n>0)
    {
        for(int i=n;i>=-n;i--)
        {
            fprintf(out,"%d ",i);
        }
        fprintf(out,"\n");
    }
    else
    {
        for(int i=n;i<=-(n);i++)
        {
            fprintf(out,"%d ",i);
        }
        fprintf(out,"\n");
    }
}
int main()
{
    in=fopen("input3.txt","r");
    out=fopen("output3.txt","w");
    int t;
    fscanf(in,"%d",&t);
    for(int i=1;i<=t;i++)
    {
        int a;
        fscanf(in,"%d",&a);
        Num_print(a);
    }
    return 0;
}