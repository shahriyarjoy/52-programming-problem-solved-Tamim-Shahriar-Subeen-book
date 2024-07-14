#include <stdio.h>//ACCEPTED
int main()
{
    int T, i, n, count = 1;
    scanf("%d", &T);
    while (T--)
    {
        int is_sorted = 1;
        scanf("%d", &n);
        int array[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &array[i]);
        }
        // checking small to big
        for (i = 0; i < n - 1; i++)
        {
            if (array[i] > array[i + 1])
            {
                is_sorted = 0;
                break;
            }
            else
            {
                count++;
                is_sorted = 1;
            }
        }
        if (count != n)
        {
            //checking big to small
            for (i = 0; i < n - 1; i++)
            {
                if (array[i] < array[i + i])
                {
                    is_sorted = 0;
                    break;
                }
                else
                    is_sorted = 1;
            }
        }

        if (is_sorted == 1)
        {
            printf("YES\n");
        }
        else
            printf("NO\n");
        count = 1;
    }
}