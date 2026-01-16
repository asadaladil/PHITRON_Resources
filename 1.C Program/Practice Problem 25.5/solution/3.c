#include<stdio.h>
#include<math.h>
#include<string.h>
int power_2(char R[],int x)
{
    int a=0;
    for(int i=0;i<x;i++)
    {
        a=a+(R[i]-96);
    }
    for(int i=1;i>0;i++)
    {
        if(pow(2,i)==a)
        {
            return i;
        }
        if(pow(2,i)>a)
        {
            return 0;
        }
    }
}
int main()
{
    char r[1000];
    scanf("%s",r);
    int len=strlen(r);
    if(power_2(r,len)>0)
    {
        printf("YES\n2^%d",power_2(r,len));
    }
    else
    {
        printf("NO");
    }
    return 0;
}