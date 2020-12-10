#include <stdio.h>
int main()
{
    int warr[] = { 500,100,50,10,5,1 };
    int iarr[6];
    int parr[6] = { 0 };
    int i, j, k;
    int w;
    int na;
    scanf("%d", &w);
    for (i = 0; i<6; i++)
        scanf("%d", &iarr[i]);
    for (i = 0; i<6; i++)
    {
        for (j = 0; j<iarr[i]; j++)
        {
            if (w - warr[i]<0)
                break;
            w -= warr[i];
        }
        parr[i] = j;
    }

    printf("%d\n%d %d %d %d %d %d", parr[0] + parr[1] + parr[2] + parr[3] + parr[4] + parr[5], parr[0], parr[1], parr[2], parr[3], parr[4], parr[5]);
    return 0;
}
