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

    int flag = 1;
    int diagonal = a[0][0];

    if (r != c)
    {
        flag = 0;
    }
    else
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i == j)
                {
                    if (a[i][j] != diagonal)
                    {
                        flag = 0;
                        break;
                    }
                }
                else
                {
                    if (a[i][j] != 0)
                    {
                        flag = 0;
                        break;
                    }
                }
            }
        }
    }

    if (flag == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}