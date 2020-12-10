#include <stdio.h>
int n,m,arr[7];
void output();
void abc(int lv);
int main()
{
    scanf("%d %d",&n,&m);
    abc(0);
}
void abc(int lv)
{
    int i;
    if (lv==n)
    {
        output();
        return ;
    }
    for (i=0;i<6;i++)
    {
        arr[lv]=i+1;
        abc(lv+1);
    }
    return ;
}
void output()
{
    int i;
    if(arr[0]+arr[1]+arr[2]+arr[3]+arr[4]+arr[5]+arr[6]==m)
    {
    for (i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n");
    }
}
