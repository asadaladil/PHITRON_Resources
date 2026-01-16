#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);

    if(a>b&&b>c&&c>d)
    {
        printf("Largest = %d\n",a);
        if(b<c&&b<d)
        {
            printf("Smallest = %d\n",b);
        }
        else if(c<b&&c<d)
        {
            printf("Smallest = %d\n",c);
        }
        else
        {
            printf ("Smallest = %d\n",d);
        }
    }
    if(b>a&&b>c&&b>d)
    {
        printf("Largest = %d\n",b);
        if(a<c&&a<d)
        {
            printf("Smallest = %d\n",a);
        }
        else if(c<a&&c<d)
        {
            printf("Smallest = %d\n",c);
        }
        else
        {
            printf ("Smallest = %d\n",d);
        }
    }
    else if(c>a&&c>b&&c>d)
    {
        printf("Largest = %d\n",c);
        if(b<a&&b<d)
        {
            printf("Smallest = %d\n",b);
        }
        else if(b>a&&a<d)
        {
            printf("Smallest = %d\n",a);
        }
        else
        {
            printf ("Smallest = %d\n",d);
        }
    }
    else
    {
        printf("Largest = %d\n",d);
        if(a<b&&a<c)
        {
            printf("Smallest = %d\n",a);
        }
        else if(c<b&&c<d)
        {
            printf("Smallest = %d\n",c);
        }
        else
        {
            printf ("Smallest = %d\n",b);
        }
    }

  
    return 0;
}
