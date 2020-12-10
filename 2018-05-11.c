/*
#include <stdio.h>//스택 

int stack[100], t;

void push()
{
    int a;
    scanf("%d", &a);
    stack[++t] = a;
}

void pop()
{
    if (t == 0) {
        printf("empty\n");
        return;
    }
    printf("%d\n", stack[t--]);
}
int main()
{
    char a;
    int i,c;
	scanf("%d",&c);
    while(c--) {
        scanf(" %c", &a);
//        if (a == 'e') break;
        if (a == 'i') push();
        else if (a == 'o') pop();
        else printf("%d\n", t);
    }
    return 0;
}

#include <stdio.h>//큐 

int queue[100], t;

void push()
{
    int a;
    scanf("%d", &a);
    queue[++t] = a;
}

void pop()
{
	int a=0;
    if ( t == 0) {
        printf("empty\n");
        return;
    }
    printf("%d\n", queue[1]);
    while(++a<t)
    	queue[a]=queue[(a)+1];
    t--;
}
int main()
{
    char a;
    int i,c;
	scanf("%d",&c);
    while(c--) {
        scanf(" %c", &a);
//        if (a == 'e') break;
        if (a == 'i') push();
        else if (a == 'o') pop();
        else printf("%d\n", t);
    }
    return 0;
}

#include<stdio.h> //후위 표기법 
int n,i,bb,bbb;
char b;
int stack[100], t;

void push(int p)
{
    stack[++t] = p;
}

int pop()
{
    if (t == 0) {
        printf("empty\n");
        return;
    }
    return stack[t--];
}

main()
{
   scanf("%d",&n);
   for(;i++<n;)
   {
      scanf(" %c",&b);
      if(b>='0'&&b<='9')
      {
         push(b-48);
      }
      else
      {
         bbb=pop();
         bb=pop();
         if(b=='+')push(bb+bbb);
         if(b=='-')push(bb-bbb);
         if(b=='/')push(bb/bbb);
         if(b=='*')push(bb*bbb);
      }

   }
   printf("%d",stack[t]);
}

#include <stdio.h>//파이프 

int main()
{
	char ch[100001];
	int a=0,b=0,c=0,i=-1,total=0;
	scanf("%s",ch);
	while(ch[++i])
	{
		if(ch[i]=='('&&ch[i+1]==')')
		{
			total+=a;
			i++;
		}
		else if(ch[i]=='(')
			a++;
		else
		{
			a--;
			total++;
		}
	}
	printf("%d",total);
	return 0;
}

#include <stdio.h>//불쾌한 날 1 

int main()
{
	int arr[80000];
	int i,j,k,sum=0;
	scanf("%d",&i);
	for (j=0;j<i;j++)
		scanf("%d",&arr[j]);
	for(j=0;j<i;j++)
	{
		k=j;
		while(arr[j]>arr[++k]&&k<i)
			sum++;
	}
	printf("%d",sum);
	return 0;
}
*/


#include <stdio.h>//불쾌한 날 2

int stack[80001],t;

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





















