#include <stdio.h>
#include <time.h>
int main()
{
	int a = 0;
	int b,c,d;
	time_t now;
	struct tm tt;
	time(&now);
	tt = *localtime(&now);
	b=a += tt.tm_year;
	c=a += tt.tm_mon;
	d=a += tt.tm_mday;
	printf("%d %d",b,c);
	return 0;
}
