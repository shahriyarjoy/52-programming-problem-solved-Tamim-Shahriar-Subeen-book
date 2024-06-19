#include<stdio.h>
#include<string.h>
int main()
{
    int T,i,m,n,j;
    char S[1000];
    char String[1000];
    scanf("%d",&T);
    while(T--){
        int count=0,count2=0;
        scanf(" %[^\n]",S);
        for(i=0;i<=strlen(S);i++){
            count2++;
            if(S[i]==' '|| S[i]=='\0'){
                for(m=0,n=count-1;m<count2-1;m++,n--){
                    String[m]=S[n];
                }
                for(j=0;j<count2-1;j++){
                    printf("%c",String[j]);
                }
                if(S[i]!='\0')
                printf(" ");
                count2=0;
            }
            count++;
        }
        printf("\n");
        
    }
}