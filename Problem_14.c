#include<stdio.h>
#include<string.h>
int main()
{
    int i, T;
    char first_line[10000];
    char second_line[2];
    scanf("%d",&T);
    while(T--)
    {
        int count = 0;
        scanf(" %[^\n]",first_line);
        scanf("%s",second_line);
        for(i=0;i<strlen(first_line);i++)
        {
            if(second_line[0]==first_line[i])
            {
                count++;
            }
        }
        if(count)
        {
            printf("Occurrence of '%c' in '%s' = %d\n",second_line[0],first_line,count);
        }
        else printf("'%c' is not present\n",second_line[0]);
    }
}