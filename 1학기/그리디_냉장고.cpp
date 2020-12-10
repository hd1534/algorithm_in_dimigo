#include <stdio.h>
#include <algorithm>
using namespace std;

int arr[100][2];//0은 최저 1은 최고 온도이다.

int re=1;//냉장고 갯수
int n;
void hand_made_sort()//최저기온을 기준으로로 정렬
{
    int a,b,c,tmp;
    for (a=0;a<n;a++)
    {
        for (b=a+1;b<n;b++)
            if(arr[a][0]>arr[b][0]||(arr[a][0]==arr[b][0]&&arr[a][1]>arr[b][1]))//온도가 같으면 최고온도순으로 정렬
            {
                tmp=arr[a][0];
                arr[a][0]=arr[b][0];
                arr[b][0]=tmp;
                tmp=arr[a][1];
                arr[a][1]=arr[b][1];
                arr[b][1]=tmp;
            }
    }
}

void greedy()
{
    int i,j=0,k;
    k=arr[0][1];
    for(i=1;i<n;i++)
    {
        if(arr[i][0]>k)
        {
            k=arr[i][1];
            re++;
        }
        else if(arr[i][1]<k)k=arr[i][1];//이걸 확인하는 이유는 만약 1~6까지인 x와 0~9까지인 y가 있다 했을때 냉장고는 9의 온도가 아닌 6의 온도에 있어야 하기 때문이다.
    }
}

int main()
{
    int i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d %d",&arr[i][0],&arr[i][1]);
    hand_made_sort();
    greedy();
    printf("%d",re);
    return 0;
}
