#include<stdio.h>
int main()
{
    FILE *input;
    FILE *output;

    input=fopen("input2.txt","r");
    output=fopen("output2.txt","w");

    if(input==NULL)
    {
        printf("NO FILE FOUND");
        return 0;
    }
    int n;
    fscanf(input,"%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("%d ",i);
        fprintf(output,"%d ",i);
    }
    return 0;

}