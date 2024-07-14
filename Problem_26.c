#include<stdio.h>//Accepted
int main()
{
    int T, count=0;
    double X, div;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%lf",&X);
        div = X;
        while(div>1)
        {
            div = div/2;
            count++;
        }
        printf("%d days\n", count);
        count = 0;
    }
}