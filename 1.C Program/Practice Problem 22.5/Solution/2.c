#include <stdio.h>

int is_prime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return 1;
        }
    }
    return 0;
}
void prime(int n)
{
    int x=2;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            for(int m=x;m>1;m++)
            {
                if(is_prime(m)==0)
                {
                    printf("%d ",m);
                    x++;
                    break;
                }
                else
                {
                    x++;
                    continue;
                }
            }
        }
        printf("\n");
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    prime(n);
    return 0;
}