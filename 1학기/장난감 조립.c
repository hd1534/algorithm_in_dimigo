#include <stdio.h>
int main()
{
	int arr[101][101] = { 0 };
	int need[101] = { 0 };
	int n, m;
	int i, j, k;
	int a, b;
	scanf("%d %d", &n, &m);
	for (i = 1; i <= m; i++)
	{
		scanf("%d %d", &a, &b);
		scanf("%d", &arr[a][b]);
	}
	need[n] = 1;
	for (i = m-1; i>0; i--)
	{
		for (j = 1; j <= m; j++)
		{
			if (arr[i][j])//비어 있지 않으면
			{
				need[j] += arr[i][j] * need[i];
				k = i;
			}
		}
	}
	for (i = 1; i<k; i++)
		printf("%d %d\n", i, need[i]);
	return 0;
}
