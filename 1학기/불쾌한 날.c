#include<stdio.h>
int stack[80001],t=-1;

void push(int p)
{
    stack[++t] = p;
}

void pop()
{
    stack[t--]=0;
}

int main()
{

    int i,j,k,sum=0;
    scanf("%d",&i);
    scanf("%d",&k);
    push(k);
    for (j=1;j<i;j++)
    {
        scanf("%d",&k);
        while(k<stack[t])
            pop();
        sum+=t;
        push(k);
    }
    sum+=t;
    printf("%d",sum);
    return 0;
}
