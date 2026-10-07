// #include <stdio.h>

// int main()
// {
//     int r, c;
//     scanf("%d %d", &r, &c);

//     int a[r][c];

//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             scanf("%d", &a[i][j]);
//         }
//     }

//     int is_secondary_diagonal = 1;

//     if (r == c)
//     {
//         for (int i = 0; i < r; i++)
//         {
//             for (int j = 0; j < c; j++)
//             {
//                 if (i + j == r - 1)
//                 {
//                 }
//                 else
//                 {
//                     if (a[i][j] != 0)
//                     {
//                         is_secondary_diagonal = 0;
//                         printf("It is not a secondary diagonal matrix\n");
//                     }
//                 }
//             }
//         }
//         if (is_secondary_diagonal = 1)
//         {
//             printf("It is a secondary diagonal matrix\n");
//         }
//     }
//     else
//     {
//         printf("It is not a secondary diagonal matrix\n");
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

    int isSecondaryDiagonal = 1;

    if (r != c)
    {
        isSecondaryDiagonal = 0;
    }
    else
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i + j == r - 1)
                {
                    continue;
                }
                else
                {
                    if (a[i][j] != 0)
                    {
                        isSecondaryDiagonal = 0;
                    }
                }
            }
        }
    }

    if (isSecondaryDiagonal == 1)
    {
        printf("Secondary Diagonal");
    }
    else
    {
        printf("Not Secondary Diagonal ");
    }

    return 0;
}