https : // codeforces.com/group/MWSDmqGsZm/contest/219774/problem/S
#include <stdio.h>

        int main()
{

    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int n;
    scanf("%d", &n);

    int can_take = 1;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (a[i][j] == n)
            {
                can_take = 0;
                break;
            }
        }
    }

    if (can_take == 1)
    {
        printf("will take number");
    }
    else
    {
        printf("will not take number");
    }

    return 0;
}
