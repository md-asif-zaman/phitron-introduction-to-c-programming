// #include <stdio.h>

// int main()
// {
//     int r, c;
//     scanf("%d %d", &r, &c);

//     int a[r][c];

//     int isZeroMatrix = 1;

//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             scanf("%d", &a[i][j]);
//         }
//     }

//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             if (a[i][j] != 0)
//             {
//                 isZeroMatrix = 0;
//                 break;
//             }
//         }
//     }

//     int total_value = r * c;
//     int zero = 0;

//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             if (a[i][j] == 0)
//             {
//                 zero++;
//             }
//         }
//     }

//     printf("%d", isZeroMatrix);

//     if (total_value == zero)
//     {
//         printf("It is a zero matrix");
//     }
//     else
//     {
//         printf("It is not a zero matrix");
//     }

//     return 0;
// }

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

    int total = r * c;
    int zero = 0;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (a[i][j] == 0)
            {
                zero++;
            }
        }
    }

    if (total == zero)
    {
        printf("Zero matrix");
    }
    else
    {
        printf("Not zero matrix");
    }

    return 0;
}