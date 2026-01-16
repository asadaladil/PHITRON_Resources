#include<stdio.h>
int main()
{
    FILE *in;
    FILE *out;
    in=fopen("input4.txt","r");
    out=fopen("output4.txt","w");
    int n,sum=0;
    fscanf(in,"%d",&n);
    for(int i=1;i<=n;i++)
    {
        int a;
        fscanf(in,"%d",&a);
        sum=sum+a%10;
    }
    fprintf(out,"Sum = %d",sum);
    return 0;
}