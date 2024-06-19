#include<stdio.h>
#include<string.h>
int main()
{
    int T,i;
    char s[10000];
    scanf("%d",&T);
    while(T--)
    {
        int count=0;
        scanf(" %[^\n]", s);
        for(i=0;i<=strlen(s);i++)
        {
            if(s[i]==' '||s[i]=='\0')
            count++;
        }
        printf("Count = %d\n", count);
    }
}