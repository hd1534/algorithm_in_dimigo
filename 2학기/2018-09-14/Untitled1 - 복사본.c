#include <stdio.h>
#include <string.h>
int main()
{
    char ch[11][101],s;
    int i,j,min;
    for(i=0;i<10;i++)
        scanf("%s",ch[i]);
    scanf(" %c",&s);
    for(i=0;i<10;i++)
    {
        min =i;
        for(j=i;j<10;j++)
            if(strcmp(ch[j],ch[min])<0)
                min = j;
         strcpy(ch[10],ch[min]);
         strcpy(ch[min],ch[i]);
         strcpy(ch[i],ch[10]);
    }
    for(i=0;i<10;i++)
        if(strchr(ch[i],s))
            printf("%s\n",ch[i]);
    return 0;
}
