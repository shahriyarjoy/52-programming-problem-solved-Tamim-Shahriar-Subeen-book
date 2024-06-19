#include<stdio.h>
#include<string.h>
int main()
{
    int T;
    char S[1000];
    scanf("%d",&T);
    while(T--)
    {
        scanf(" %[^\n]",S);
        for(int i=0;i<strlen(S);i++)
        {
            if (S[i] == 'A' || S[i] == 'E' || S[i] == 'I' || S[i] == 'O' || S[i] == 'U' || S[i] == 'a' || S[i] == 'e' || S[i] == 'i' || S[i] == 'o' || S[i] == 'u')
            printf("%c",S[i]);
        }
        printf("\n");
        for(int i=0;i<strlen(S);i++)
        {
            if (S[i] != 'A' && S[i] != 'E' && S[i] != 'I' && S[i] != 'O' && S[i] != 'U' && S[i] != 'a' && S[i] != 'e' && S[i] != 'i' && S[i] != 'o' && S[i] != 'u' && S[i] != ' ')
            printf("%c",S[i]);
        }
        printf("\n");

    }
}