#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *arrp;
    int i,n,max = 0, min = 9999999;
    scanf("%d",&n);
    arrp = (int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
        scanf("%d",arrp+i);
    for(i=0;i<n;i++)
    {
        if(max<*(arrp+i))
            max = *(arrp+i);
        if(min>*(arrp+i))
            min = *(arrp+i);
    }
    printf("max : %d\nmin : %d",max,min);

    return 0;
}
