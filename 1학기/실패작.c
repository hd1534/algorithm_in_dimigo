#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main2()
{
	int input,output=0,a,b,c=25000;//c는 체크용
	scanf("%d", &input);
	for (a = 1; a <=c; a++)//반이상 넘어가면 삼각형의 조건에 맞지 않게됨
	{
		for (b = 1; b <= input / 2; b++)//반이상 넘어가면 삼각형의 조건에 맞지 않게됨
		{
			if ((a < (input - a)) && (b < (input - b)) && ((input - a - b) < a + b))//a가 나머지 변의 길이보다 작고,b도 나머지 변의 길이보다 작고, a,b말고 다른 변도 
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

