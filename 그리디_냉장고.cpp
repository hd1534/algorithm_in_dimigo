#include <stdio.h>
#include <algorithm>
using namespace std;

int arr[100][2];//0�� ���� 1�� �ְ� �µ��̴�.

int re=1;//����� ����
int n;
void hand_made_sort()//��������� �������η� ����
{
    int a,b,c,tmp;
    for (a=0;a<n;a++)
    {
        for (b=a+1;b<n;b++)
            if(arr[a][0]>arr[b][0]||(arr[a][0]==arr[b][0]&&arr[a][1]>arr[b][1]))//�µ��� ������ �ְ�µ������� ����
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
        else if(arr[i][1]<k)k=arr[i][1];//�̰� Ȯ���ϴ� ������ ���� 1~6������ x�� 0~9������ y�� �ִ� ������ ������ 9�� �µ��� �ƴ� 6�� �µ��� �־�� �ϱ� �����̴�.
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
