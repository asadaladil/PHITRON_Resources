#include<stdio.h>
int main()
{
    FILE *inputFile;
    FILE *outputFile;

    inputFile=fopen("input.txt","r");
    outputFile=fopen("output.txt","w");
    
    if(inputFile==NULL)
    {
        printf("No file found");
        return 0;
    }
    while(1)
    {
        char r=fgetc(inputFile);
        printf("%c",r);
        if(r==EOF)
        {
            break;
        }
        fprintf(outputFile,"%c",r);
    }
    return 0;
}