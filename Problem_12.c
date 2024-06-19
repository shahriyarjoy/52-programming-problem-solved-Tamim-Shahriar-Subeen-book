#include<stdio.h>
int main()
{
    int T,i,n;
    
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&n);
        int count=0;
        int powerof5=5;
        while(n>=powerof5){
        count = count + n/powerof5;
        powerof5*=5;}
        printf("%d\n",count);
    }
    return 0;
}