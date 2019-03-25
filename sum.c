#include <stdio.h>

int main()
{
    int a,c=0,i;
    printf("enter the num:");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    c=c+i;
    printf("%d",c);

    return 0;
}
