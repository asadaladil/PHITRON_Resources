#include <stdio.h>

int main()

{
    int A,B;

    printf("Please input First number A:");
    scanf("%d",&A);
    printf("Please input First number B:");
    scanf("%d",&B);

    if(A>B)
    {
        printf("%d (A) is bigger",A);
    }
    else if(A==B)
    {
        printf("A & B are equal");
    }
    else
    {
        printf("%d (B) is bigger",B);
    }
    return 0;
}