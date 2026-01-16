#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    char R[100];
    fgets(R,sizeof(R),stdin);
    int len=strlen(R)-1;
    int a=0;
    for(int i=0;i<len;i++)
    {
        a=a+R[i]-96;
    }
    for(int i=1;i>=1;i++)
    {
        if(a==pow(2,i))
        {
            printf("   Yes\ncost = 2^%d",i);
            break;
        }
        else if(a<pow(2,i))
        {
            printf("No");
            break;
        }
    }
    return 0;


}