#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main2()
{
	int input,output=0,a,b,c=25000;//c�� üũ��
	scanf("%d", &input);
	for (a = 1; a <=c; a++)//���̻� �Ѿ�� �ﰢ���� ���ǿ� ���� �ʰԵ�
	{
		for (b = 1; b <= input / 2; b++)//���̻� �Ѿ�� �ﰢ���� ���ǿ� ���� �ʰԵ�
		{
			if ((a < (input - a)) && (b < (input - b)) && ((input - a - b) < a + b))//a�� ������ ���� ���̺��� �۰�,b�� ������ ���� ���̺��� �۰�, a,b���� �ٸ� ���� 
			{
				if (c <= a)
				{
					c = 0;
					break;
				}
				if (input-a-b < b)
					break;
				c = b;
				output++;
			}
		}
	}
	printf("%d", output);
	return 0;
}

