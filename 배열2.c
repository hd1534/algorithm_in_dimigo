//달팽이 사각형 (미완)
#include <stdio.h>
int main()
{
    int arr[1000][1000];
    int i,j=1,k=-1;
    int n,m,a,b=0,c=0;

    scanf(" %d",&n);
    for(a=0;a<n;a++)
    {
        arr[0][a]=c++;
    }
    for(i=n-1;i>0;i--)
    {
        for(a--,m=0;m<i;b+=j,m++)
        {
            arr[a][b]=c++;
        }
        j*=-1;
        for(b--,m=0;m<i;a+=k,m++)
        {
            arr[a][b]=c++;
        }
        k*=-1;
    }
    for(a=0;a<i;a++)
    {
        for(b=0;b<i;b++)
            printf("%d ",arr[a][b]);
        printf("\n");
    }
    return 0;
}

