/*
#include <stdio.h>
int main()
{
    int arr[101][101];
    int i,j,k=1;
    int a,b;
    scanf("%d %d",&i,&j);
    for(a=0;a<i;a++)
        for(b=0;b<j;b++)
            arr[a][b]=k++;
    for(a=0;a<i;a++)
    {
        for(b=0;b<j;b++)
            printf("%d ",arr[a][b]);
        printf("\n");
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int arr[101][101];
    int i,j,k=1;
    int a,b;
    scanf("%d %d",&i,&j);
    for(a=0;a<i;a++)
    {
        if(a%2)
            for(b=j;b>0;b--)
                arr[a][b]=k++;
        else
            for(b=0;b<j;b++)
                arr[a][b]=k++;
    }
    for(a=0;a<i;a++)
    {
        for(b=0;b<j;b++)
            printf("%d ",arr[a][b]);
        printf("\n");
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int arr[101][101];
    int i,j,k=1;
    int a,b;
    scanf("%d",&i);
    for(a=0;a<i;a++)
        for(b=0;b<i;b++)
            arr[b][a]=k++;
    for(a=0;a<i;a++)
    {
        for(b=0;b<i;b++)
            printf("%d ",arr[a][b]);
        printf("\n");
    }
    return 0;
}

#include <stdio.h>
int main()
{
    char arr[101][101];
    int i,j,k='A';
    int a,b;
    scanf("%d",&i);
    for(a=0;a<i;a++)
    {
        if(a%2)
            for(b=i-1;b>=0;b--,k-=(k>'Z')*26)
                arr[b][a]=k++;
        else
            for(b=0;b<i;b++,k-=(k>'Z')*26)
                arr[b][a]=k++;
    }
    for(a=0;a<i;a++)
    {
        for(b=0;b<i;b++)
            printf("%c ",arr[a][b]);
        printf("\n");
    }
    return 0;
}
#include <stdio.h>
int main()
{
    char arr[1000][1000];
    int i,j,k='A';
    int a,b;
    scanf("%d",&i);
    i--;
    for(a=0;a<=i;a++)
    {
        for(b=0;i-a-b>=0;b++,k-=(k>'Z')*26)
            arr[i-a-b][b]=k++;
    }
    for(a=i;a>=0;a--)
    {
        for(b=i;b>=0;b--)
            printf("%c ",arr[a][b]);
        printf("\n");
    }
    return 0;
}

#include <stdio.h>
int main()
{
    char arr[1000][1000];
    int i,j,k='A';
    int a,b,c;
    scanf("%d",&i);
    if((i%2)^1||i<1||i>100)
    {
        printf("INPUT ERROR");
        return 0;
    }
    for(a=i/2,c=0;a>=0;a--,c++)
    {
        for(b=i/2-c;b<=i/2+c;b++,k-=(k>'Z')*26)
            arr[b][a]=k++;
    }


    for(a=0;a<i;a++)
    {
        for(b=0;b<i;b++)
            printf("%c ",arr[a][b]);
        printf("\n");
    }
    return 0;
}

#include <stdio.h>
int main()
{
    char arr[1000][1000];
    int i,j,k='A';
    int a,b,c;
    scanf("%d",&i);
    for(a=0,c=0;a<i;a++,c++)
    {
        for(b=0;b<i-c;b++,k-=(k>'Z')*26)
            arr[b+c][b]=k++;
    }


    for(a=0;a<i;a++)
    {
        for(b=i-1;b>=0;b--)
            printf("%c ",arr[a][b]);
        printf("\n");
    }
    return 0;
}

*/
