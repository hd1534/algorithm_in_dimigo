#include <stdio.h>
int main()
{
    int p[12][12]={0,1,},n,i,j;//최대 10까지 입력 가능
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            p[i][j]=p[i-1][j-1]+p[i-1][j];
        }
    }
    for(i=n;i>0;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",p[i][j]);
        }
        printf("\n");
    }
    return 0;
}
