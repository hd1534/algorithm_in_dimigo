/*
#include <stdio.h>
int arr[101]={0,1,2};
int j(int a);
int main()
{
    int a;
    scanf("%d",&a);
    printf("%d",j(a));
    return 0;
}
int j(int a)
{
    if (a==1)
        return 1;
    if (a==2)
        return 2;
    if(!arr[a])
        arr[a]=(j(a-1)*j(a-2))%100;
    return arr[a];
}


#include <stdio.h>
int arr[101]={0,1,2};
int count=0;
void j(int a);
int main()
{
    int a;
    scanf("%d",&a);
    j(a);
    printf("%d",--count);
    return 0;
}
void j(int a)
{
    count ++;
    if (a==1)
        return;
    if (a%2)
        j(a/3);
    if (!(a%2))
        j(a/2);
}


#include <stdio.h>
int arr[101]={0,1,2};
int abc=1;
void j(int a);
int main()
{
    int a,b=1;
    scanf("%d",&a);
    b*=a;
    scanf("%d",&a);
    b*=a;
    scanf("%d",&a);
    b*=a;
    j(b);
    printf("%d",abc);
    return 0;
}
void j(int a)
{
   if(!a)
    return;
   if(a%10)
    abc*=a%10;
   j(a/10);
}

*/
#include <stdio.h>
int n,m;
int arr[10];
void j(int a);
int main()
{
    scanf("%d %d",&n,&m);
    j(0);
    return 0;
}
void j(int a)
{
    int i,k=0;
    if(n==a)
    {
        for(i=0;i<n;i++)
            k+=arr[i];
        if(k!=m)
            return;
        for(i=0;i<n;i++)
            printf("%d ",arr[i]);
        printf("\n");
        return;
    }
    for(i=1;i<=6;i++)
    {
        arr[a]=i;
        j(a+1);
    }
}
