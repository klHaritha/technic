#include <stdio.h>

int main()
{
    int a,c=0,i,b[10],k;
    printf("enter the num:");
    scanf("%d",&a);
    printf("enter the num:");
    scanf("%d",&k);
    
    for(i=1;i<=a;i++)
    {
       scanf("%d",&b[i]);
      
    }
    for(i=1;i<=k;i++)
    {
         c=c+i;
       
    }
   
    printf("%d",c);

    return 0;
}
