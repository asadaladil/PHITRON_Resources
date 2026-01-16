#include<stdio.h>
int main()
{
    int a,b;
    char r;
    scanf("%c",&r);
    scanf("%d%d",&a,&b);

    if(r=='+'){printf("%d",a+b);}
    else if(r=='-')
    {
        if(a>b)
        {
            printf("%d",a-b);
        }
        else
        {
            printf("%d",b-a);
        }
    }
    else if(r=='*'){printf("%d",a*b);}
    else if(r=='/'){printf("%d",a/b);}
    else{printf("Invalid inpit");}
    return 0;
}