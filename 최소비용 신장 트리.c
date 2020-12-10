#include <stdio.h>
int main()
{
    int arr[101][101]={0};
    int check[101]={0};
    int a,b,c;
    int i,j,k;
    int n,min,min_p;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            scanf("%d",&arr[i][j]);
    i=1;
    while(1)
    {
        min=100000;
        for(j=1;j<=n;j++)
        {
            if(min>arr[i][j])
            {
                min=arr[i][j]);
                min_p=j;
            }
        }//순환 사이클이 도는지 확인및 어떤게 더 좋은지 확인
        if
    }
}
