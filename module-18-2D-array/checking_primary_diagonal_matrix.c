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

//     int isDiagonal = 1;

//     if (r == c)
//     {
//         for (int i = 0; i < r; i++)
//         {
//             for (int j = 0; j < c; j++)
//             {
//                 if (i != j)
//                 {
//                     if (a[i][j] != 0)
//                     {

//                         isDiagonal = 0;
//                         printf("It is not a primary diagonal matrix\n");
//                     }
//                 }
//             }
//         }
//         if (isDiagonal == 1)
//         {
//             printf("It is a primary diagonal matrix\n");
//         }
//     }
//     else
//     {
//         printf("It is not a primary diagonal matrix\n");
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

    int isDiagonal = 1;

    if (r != c)
    {
        isDiagonal = 0;
    }
    else
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i != j)
                {
                    if (a[i][j] != 0)
                    {
                        isDiagonal = 0;
                        break;
                    }
                }
            }
        }
    }

    if (isDiagonal == 1)
    {
        printf("Diagonal Matrix");
    }
    else
    {
        printf("Not Diagonal Matrix");
    }

    return 0;
}