#include <stdio.h>

            //a�� ���� b�� ���� c�� ���� ��
int main()
{
    int a, b, c;//���� ����
    int d, k;
    int i, j;
    scanf("%d %d", &d, &k);
    for (i = k; i>0; i--)
    {
        a = k;
        b = i;
        for (j = 2; j<d&&b>0; j++)//��¥��ŭ ����.
        {
            c = a - b;
            a = b;
            b = c;
            if (a<b)
                break;
        }
        if (j == d)
        {
            printf("%d\n%d", b, a);
            break;
        }
    }
    return 0;
}
/*
#include <stdio.h>

			//a�� ���� b�� ���� c�� ���� ��
int main()
{
	int arr[40] = { 0 };
	int a, b, c;//���� ����
	int d, k;
	int i, j;
	scanf("%d %d", &d, &k);
	for (i = k; i>0; i--)
	{
		a = k;
		arr[0] = k;
		b = i;
		arr[1] = b;
		for (j = 2; j<d&&b>0; j++)//��¥��ŭ ����.
		{
			c = a - b;
			arr[j] = c;
			a = b;
			b = c;
			if (a<b)
				break;
		}
		if (j == d)
		{
			for (i = 0; i < d; i++)
				printf("%d\n",arr[i]);
			break;
		}
	}
	return 0;
}
*/
