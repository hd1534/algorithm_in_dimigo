#include <stdio.h>
#include <algorithm>
using namespace std;

int arr[1000];
int n;
int greedy()
{
    int i,j=0;
    for(i=0;i<n;i++)
    {
        if(j+1>=arr[i])
            j+=arr[i];
        else
            return j;
    }
    return j;
}

int main()
{
    int i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    sort(arr,arr+n);
    if(arr[0]!=1)
    {
        printf("1");
        return 0;
    }
    printf("%d",greedy()+1);
    return 0;
}
