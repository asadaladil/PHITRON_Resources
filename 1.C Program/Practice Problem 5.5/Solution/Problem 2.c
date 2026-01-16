#include <stdio.h>

int main()

{
int a,i;

    scanf("%d",&a);

  if(a>0)
  {
    for(i=1;i<=a;i++)
    {
        printf("%d ",i);
    }
  }
  else if(a<0)
  {
    for(i=1;i<=a;i--)
    {
        printf("%d ",i);
    }
  }
  else
  {
    printf("Invalid Input");
  }
  return 0;
}