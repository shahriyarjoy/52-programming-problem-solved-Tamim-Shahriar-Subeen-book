#include<stdio.h>//Accepted
int main()
{
    int T,n;
    scanf("%d", &T);
    while(T--)
    {
        scanf("%d", &n);
        int ekok =n%10;
        int vagfol = n/10;
        int doshok = vagfol%10;
        int shotok = n/100;
        int sum = ekok*ekok*ekok + doshok*doshok*doshok + shotok*shotok*shotok;
        if(sum==n)
        {
            printf("%d is an armstrong number!\n",n);
        }
        else printf("%d is not an armstrong number!\n", n);
    }
}