/* 구조체를 쓴경우
#include <stdio.h>
#include <algorithm>
using namespace std;
int n, cnt = 0;
int x[500];

struct data
{
    int n, s, e;
    bool operator < (const data &r) const {
        if (e == r.e) return s < r.s;
        return e < r.e;
    }
}meet[500];

void greedy()
{
    int i, k = 0;

    for (i = 1; i <= n; i++) {
        if(meet[i].s >= k) {
            x[cnt] = meet[i].n;
            cnt++;
            k = meet[i].e;
        }
    }
}

int main()
{
    int i;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d %d %d", &meet[i].n, &meet[i].s, &meet[i].e);
    }
    sort(meet, meet+nd);
    greedy();
    printf("%d\n", cnt);
    for (i = 0; i < cnt; i++) {
        printf("%d ", x[i]);
    }
    return 0;
}
*/
//여기부터는 구조체를 안쓴경우
#include <stdio.h>
#include <algorithm>
using namespace std;
int n, cnt = 0;// num / num count
int List[500];
int meet [500][3];// 두번째 항은 0:num / 1:start time / 2:end time

void hand_made_sort()
{
    int a,b,c,tmp;
    for (a=0;a<n;a++)
    {
        for (b=a+1;b<n;b++)
            if(meet[a][2]>meet[b][2])
            {
                c=b;
                tmp=meet[a][0];
                meet[a][0]=meet[c][0];
                meet[c][0]=tmp;
                tmp=meet[a][1];
                meet[a][1]=meet[c][1];
                meet[c][1]=tmp;
                tmp=meet[a][2];
                meet[a][2]=meet[c][2];
                meet[c][2]=tmp;
            }
    }
}

void greedy()
{
    int i, e = 0;// e = end time

    for (i = 0; i < n; i++) {
        if(meet[i][1] >= e) {//start time
            List[cnt] = meet[i][0];
            cnt++;
            e = meet[i][2];//end time
        }
    }
}

int main()
{
    int i;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d %d %d", &meet[i][0], &meet[i][1], &meet[i][2]);
    }

    hand_made_sort();

    greedy();

    printf("%d\n", cnt);
    for (i = 0; i <cnt; i++) {
        printf("%d ", List[i]);
    }

    return 0;
}

