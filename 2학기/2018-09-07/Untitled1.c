#include <stdio.h>
int main()
{
    int arr[100][100];
    int n,c=0,i=-1,j=0,k=0,n1,n2,n3=-1,n4=0;
    scanf("%d",&n);
    n1=n;
    n2=n;
    while(1)
    {
        while(++i<n1)
            arr[j][i]=++k;
        n1--;
        i--;
        if(c==2*n-2)
            break;
        c++;

        while(++j<n2)
            arr[j][i]=++k;
        n2--;
        j--;
        if(c==2*n-2)
            break;
        c++;

        while(--i>n3)
            arr[j][i]=++k;
        n3++;
        i++;
        if(c==2*n-2)
            break;
        c++;

        while(--j>n4)
            arr[j][i]=++k;
        n4++;
        j++;
        if(c==2*n-2)
            break;
        c++;

    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            printf("%d ",arr[i][j]);
        puts("");
    }
    return 0;
}
