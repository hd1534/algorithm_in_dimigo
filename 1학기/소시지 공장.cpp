#include <stdio.h>
#include <algorithm>
using namespace std;
int n, cnt = 0,mi=0;// num / num count
int List[5000];
int sausage [5000][2];//두번째 항은 0:길이 / 1:너비

void hand_made_sort()
{
    int a,b,c,tmp;
    for (a=0;a<n;a++)
    {
        for (b=a+1;b<n;b++)
            if(sausage[a][0]>sausage[b][0])
            {
                tmp=sausage[a][0];
                sausage[a][0]=sausage[b][0];
                sausage[b][0]=tmp;
                tmp=sausage[a][1];
                sausage[a][1]=sausage[b][1];
                sausage[b][1]=tmp;
            }
    }
}

void greedy()
{
    int i,j=0,k;

    while(j!=n)
    {
        mi++;
        k=0;
        for (i = 0; i < n; i++)
        {
            if(List[i])//1이면 참이라서 실행
                continue;
            if(k<=sausage[i][1])
            {
                List[i]=1;
                j++;
                k=sausage[i][1];
            }
        }
    }
}

int main()
{
    int i;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d %d", &sausage[i][0], &sausage[i][1]);
    }

    hand_made_sort();

    greedy();

    printf("%d\n", mi);

    return 0;
}

