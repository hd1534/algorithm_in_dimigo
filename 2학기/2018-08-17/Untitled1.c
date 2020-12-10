#include <stdio.h>
int main()
{
    int n,m,i,j,k;
    while(1)
    {
        scanf("%d %d",&n,&m);
        if(n>100||n<-1||n%2==0)
            m = -123;
        switch(m)
        {
            case -1:
                return 0;
            case 1:
                for (i=0,k=1;i<n;i++,k++)
                {
                    for(j=0;j<k;j++)
                        printf("*");
                    printf("\n");
                }
                break;

            case 2:
                for (i=0,k=n;i<n;i++,k--)
                {
                    for(j=0;j<k;j++)
                        printf("*");
                    printf("\n");
                }
                break;
            case 3:
                for (i=0,k=1;i<n;i++,k++)
                {
                    for(j=0;j<n-k;j++)
                        printf(" ");
                    for(j=0;j<k*2-1;j++)
                        printf("*");
                    printf("\n");
                }
                break;
            case 4:
                for (i=0,k=1;i<n/2+1;i++,k++)
                {
                    for(j=0;j<k;j++)
                        printf("*");
                    printf("\n");
                }
                for (i=1,k-=2;i<n/2+1;i++,k--)
                {
                    for(j=0;j<k;j++)
                        printf("*");
                    printf("\n");
                }
                break;

            case 5:
                for (i=0,k=1;i<n/2+1;i++,k++)
                {
                    for(j=0;j<n/2+1-k;j++)
                        printf(" ");
                    for(j=0;j<k;j++)
                        printf("*");
                    printf("\n");
                }
                for (i=1,k-=2;i<n/2+1;i++,k--)
                {
                    for(j=0;j<n/2+1-k;j++)
                        printf(" ");
                    for(j=0;j<k;j++)
                        printf("*");
                    printf("\n");
                }
                break;
            case 6:
                for (i=0,k=n/2+1;i<n/2+1;i++,k--)
                {
                    for(j=0;j<n/2+1-k;j++)
                        printf(" ");
                    for(j=0;j<k*2-1;j++)
                        printf("*");
                    printf("\n");
                }
                for (i=1,k=2;i<n/2+1;i++,k++)
                {
                    for(j=0;j<n/2+1-k;j++)
                        printf(" ");
                    for(j=0;j<k*2-1;j++)
                        printf("*");
                    printf("\n");
                }
                break;
            case 7:
                for (i=n/2+1,k=0;i>0;i--,k++)
                {
                    for(j=0;j<k;j++)
                        printf(" ");
                    for(j=0;j<n/2+1-k;j++)
                        printf("*");
                    printf("\n");
                }
                for (i=1,k=2;i<n/2+1;i++,k++)
                {
                    for(j=0;j<n/2;j++)
                        printf(" ");
                    for(j=0;j<k;j++)
                        printf("*");
                    printf("\n");
                }
                break;
            case 8:
                if(n>100||n<1||n%2==0)
                {
                    printf("INPUT ERROR!");
                    return 0;
                }
                for (i=0,k=1;i<n/2+1;i++,k+=2)
                    {
                        for(j=0;j<i;j++)
                            printf(" ");
                        for(j=0;j<k;j++)
                            printf("*");
                        printf("\n");
                    }
                for (i=1,k-=4;i<n/2+1;i++,k-=2)
                    {
                        for(j=0;j<n/2-i;j++)
                            printf(" ");
                        for(j=0;j<k;j++)
                            printf("*");
                        printf("\n");
                    }
                break;
            default:
                printf("INPUT ERROR!");

        }
    }
}
