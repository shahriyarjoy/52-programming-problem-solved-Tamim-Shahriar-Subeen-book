#include<stdio.h>
#include<string.h>
int main()
{
    int T,i;
    char S[1000];
    scanf("%d",&T);
    while(T--)
    {
        int count=0;
        scanf(" %[^\n]",S);
        for(i=0;i<strlen(S);i++)
        {
            if(S[i]=='A' || S[i]=='E' || S[i]=='I' || S[i]=='O' || S[i]=='U' || S[i]=='a' || S[i]=='e' || S[i]=='i' || S[i]=='o' || S[i]=='u')
            count++;
        }
        printf("Number of vowels = %d\n",count);
    }
}