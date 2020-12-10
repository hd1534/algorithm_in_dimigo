/*#include <stdio.h>
int abc(n)
{
    if(!n)
        return n;
    return n+abc(n-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",abc(n));
	return 0;
}

#include <stdio.h>
int main()
{
    int i,j,k;
    int arr[6]={1,2,3,4,5,6};
    for(i=0;i<6;i++)
        for(j=i;j<6;j++)
            for(k=j;k<6;k++)
                printf("%d %d %d\n",arr[i],arr[j],arr[k]);
    return 0;
}

#include <stdio.h>
int n, arr[15];
void output();
void abc(int lv,int set);
int main()
{
    scanf("%d",&n);
    abc(0,0);
}
void abc(int lv,int set)
{
    int i;
    if (lv==n)
    {
        output();
        return ;
    }
    for (i=set;i<6;i++)
    {
        arr[lv]=i+1;
        abc(lv+1,i);
    }
    return ;
}
void output()
{
    int i;
    for (i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n");
}

#include <stdio.h>
int abc(int i);
int main()
{
    int i;
    scanf("%d",&i);
    printf("%d",abc(i));
    return 0;
}
int abc(int i)
{
    if (!i)
        return 0;
    return (i%10)*(i%10)+abc(i/10);
}

#include <stdio.h>
void abc(int i);
int main()
{
    int a;
    scanf("%d",&a);
    abc(a);
    return 0;
}
abc(int i)
{
    if(i<=0)
        return;
    abc(i-2);
    printf("%d ",i);
}
#include <stdio.h>
int abc(int a);
int main()
{
    int a;
    scanf("%d",&a);
    printf("%d",abc(a));
    return 0;
}
abc(int a)
{
    if (a<3)
        return a;
    return abc(a-1)*abc(a-2)%100;
}
*/
/*
#include <stdio.h>
int arr[100]={1,2};
void abc(int a);
int main()
{
    int a;
    scanf("%d",&a);
    abc(a)
    printf("%d",arr[a-1]);
    return 0;
}
void abc(int a)
{
    if (a<2)
        return;
    abc(a-1);
    arr[a]=arr[a-1]*arr[a-2]%100;
}
#include <stdio.h>
int abc(int i);
int main()
{
    int i;
    scanf("%d",&i);
    printf("%d",abc(i));
    return 0;
}
int abc(int i)
{
    return
}

/*
#include <stdio.h>
int main()
{

    return 0;
}

#include <stdio.h>
int main() {
	int a=0,b=0,i;
	scanf("%d",&i);
	while(1)
	{
		do
		{
			printf("%2d ",++b);
		}while(b%i);
		b+=i+1;//1더하는 이유는 while문에서 --b로 시작해서
		if(++a==i)
			break;
		printf("\n");
		do
		{
			printf("%2d ",--b);
		}while((b-1)%i);
		if(++a==i)
			break;
		printf("\n");
		b+=i-1;//1빼는 이유는 while문에서 ++b로 시작해서
	}
	return 0;
}



#include <stdio.h>
int n;
void o(int *arr)
{
    int a;
    for(a=0;a<n;a++)
        printf("%d ",arr[a]);
    puts("");
}
int main()
{
    int arr[100];
    int a,b,c,tmp;
    scanf("%d",&n);
    for(a=0;a<n;a++)
        scanf("%d",&arr[a]);
    for(a=0;a<n-1;a++)
    {
        c=a;
        for(b=a+1;b<n;b++)
        {
            if(arr[c]>arr[b])
                c=b;
        }
        tmp=arr[a];
        arr[a]=arr[c];
        arr[c]=tmp;
        o(arr);
    }
}

#include <stdio.h>
int n;
void o(int *arr)
{
    int a;
    for(a=0;a<n;a++)
        printf("%d ",arr[a]);
    puts("");
}
int main()
{
    int arr[100];
    int a,b,tmp;
    scanf("%d",&n);
    for(a=0;a<n;a++)
        scanf("%d",&arr[a]);
    for(a=0;a<n-1;a++)
    {
        for(b=0;b<n-1;b++)
        {
            if(arr[b]>arr[b+1])
            {
                tmp=arr[b];
                arr[b]=arr[b+1];
                arr[b+1]=tmp;
            }

        }
        o(arr);
    }
}

#include <stdio.h>
int n;
void o(int *arr)
{
    int a;
    for(a=0;a<n;a++)
        printf("%d ",arr[a]);
    puts("");
}
int main()
{
    int arr[100];
    int a,b,c,tmp;
    scanf("%d",&n);
    for(a=0;a<n;a++)
        scanf("%d",&arr[a]);
    for(a=1;a<n;a++)
    {
        for(b=0;b<a;b++)
        {
            if(arr[b]>arr[a])
            {
                c=b;
                tmp=arr[a];
                for(b=a;b>c;b--)
                    arr[b]=arr[b-1];
                arr[b]=tmp;
                break;
            }
        }
        o(arr);
    }
}

#include<stdio.h>
int arr[50000];
int bsearch(int s,int l);
int main()
{
    int f[10000];
    int l,tl,a;
    scanf("%d",&l);
    for(a=0;a<l;a++)
        scanf("%d",&arr[a]);
    scanf("%d",&tl);
    for(a=0;a<tl;a++)
        scanf("%d",&f[a]);
    for (a=0;a<tl;a++)
    {
    	printf("%d\n",bsearch(f[a],l));
    }

    return 0;
}
int bsearch(int s,int l)
{
	int f=0,m;
	while(f<=l)
	{
		m=(f+l)/2;
		if(arr[m]==s)
			return m+1;
		if(arr[m]>s)
			l=m-1;
		else
			f=m+1;
	}
	return 0;
}

#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d",(a/4-a/100+a/400)-(b/4-b/100+b/400));
	return 0;
}
*/
#include <stdio.h>
int q,w;
int g(int a,int b,int c);
int main()
{
	int a,b,c,d;
	scanf("%d %d",&a,&b);
	for(c=1;c<a;c++)
	{
		if(d=g(a,b,c))
		{
			printf("%d\n %d",q,w);
			return 0;
		}
	}
	return 0;
}
int g(int a,int b,int c)
{
	if(b<c)
		return 0;
	if(a<1)
	{
		q=b,w=c;
		return 1;
	}
	return g(--a,b-c,c);
}





