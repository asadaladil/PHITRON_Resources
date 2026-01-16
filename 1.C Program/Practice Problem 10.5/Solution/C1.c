#include <stdio.h>
int main()
{
    int r,c;
    char R[100],c;
    scanf("%d%d",&r,&c);
    int i;

    for(i=1;i<=r*c;i++)
    {
       scanf("%c",&R[i]);
    }

    for(i=1;i<=r*c;i++)
    {
        if(R[i]=='B'||R[i]=='W')
        {
            printf("#Black&White");
            break;
        }
        
    }
    return 0;


}