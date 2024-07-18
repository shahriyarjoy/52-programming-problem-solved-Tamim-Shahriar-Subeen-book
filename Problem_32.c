#include<stdio.h>
int main()
{
    int T;
    int N,mult= 1, X;
    scanf("%d",&T);
    while(T--){
        scanf("%d%d",&X,&N);
        if(N>X){
            for(int i=1;(mult+X)<=N;i++){
                mult = X*i;
                printf("%d\n",mult);
            }
        }
        else printf("Invalid!\n");
        mult = 1;
        printf("\n");
    }
}