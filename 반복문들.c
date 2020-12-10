#include <stdio.h>
int main()
{
    int i,j,k=1;
    int a,b,c;
    char ch='A';
    scanf("%d",&i);
    for(a=0;a<i;a++)
    {
        for(b=0;b<i;b++)
        {
            printf("%d ",k%10);
            k+=2;
        }
        printf("\n");
    }
    return 0;
}
