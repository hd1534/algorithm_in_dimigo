#include <stdio.h>
int main()
{
    long long a,p=1;
    scanf("%lld",&a);
    while(a>1)
    {
        printf("%lld! = %lld * %lld!\n",a,a,a-1);
        p*=a--;
    }
    printf("1! = 1\n%lld",p);
    return 0;
}
