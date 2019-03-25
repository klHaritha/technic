#include <stdio.h>

int main()
{
    int count=0,a;
    printf("enter the num:");
    scanf("%d",&a);
    while(a!=0)
    {
        a=a/10;
        count++;
    }
    printf("%d",count);

    return 0;
}
