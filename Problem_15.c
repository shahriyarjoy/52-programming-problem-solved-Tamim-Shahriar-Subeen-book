#include<stdio.h>
#include<string.h>
int main()
{
    int i, T;
    int count[26];
    
    char S[1000];
    scanf("%d",&T);
    while(T--)
    {
        memset(count,0, sizeof(count));
        scanf(" %[^\n]",S);
        for(i=0;i<strlen(S);i++)
        {
            if(S[i]>='a'&&S[i]<='z')
            {
                count[S[i]-'a']++;
            }
        }
        for(i=0;i<26;i++)
        {
            if(count[i]!=0)
            {
                printf("%c = %d\n", 'a'+i, count[i]);
            }
        }
        printf("\n");
    }
}