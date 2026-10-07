// // https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/T
// #include <stdio.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);

//     int a[n][n];

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             scanf("%d", &a[i][j]);
//         }
//     }

//     int primary_diagonal = 0;
//     int secondary_diagonal = 0;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (i == j)
//             {
//                 primary_diagonal = primary_diagonal + a[i][j];
//             }
//             if (i + j == n - 1)
//             {
//                 secondary_diagonal = secondary_diagonal + a[i][j];
//             }
//         }
//     }

//     int difference = primary_diagonal - secondary_diagonal;

//     if (difference < 0)
//     {
//         difference = difference * -1;
//     }

//     printf("%d", difference);

//     return 0;
// }

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int sum1 = 0;
    int sum2 = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                sum1 += a[i][j];
            }
            if (i + j == n - 1)
            {
                sum2 += a[i][j];
            }
        }
    }

    if (sum1 < 0)
    {
        sum1 *= -1;
    }
    if (sum2 < 0)
    {
        sum2 *= -1;
    }

    printf("%d", sum1 + sum2);

    return 0;
}