#include <stdio.h>
int main()
{
    int a,i,j;
    scanf("%d",&a);
    for(i=a;i>0;i--)
    {
        for(j=0;j<a-i;j++)
            printf(" ");
        for(j=0;j<i-1;j++)
            printf("**");
        printf("*\n");
    }
    for(i=2;i<=a;i++)
    {
        for(j=0;j<a-i;j++)
            printf(" ");
        for(j=0;j<i-1;j++)
            printf("**");
        printf("*\n");
    }
    return 0;
}
