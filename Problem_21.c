#include<stdio.h>
#include<string.h>
int main()
{
    int T,i;
    char s[1000];
    scanf("%d",&T);
    while(T--)
    {
        scanf(" %[^\n]",s);
        int length= strlen(s);
        for(i=length-1;i>=0;i--)
        {
            printf("%c",s[i]);
        }
        printf("\n");
    }
}