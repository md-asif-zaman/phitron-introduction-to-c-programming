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

//     if (r == 1)
//     {
//         printf("This is a row Matrix");
//     }
//     else
//     {
//         printf("This is not a row matrix");
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
            scanf("%d", &a[i]);
        }
    }

    if (r == 1)
    {
        printf("Row Matrix");
    }
    else
    {
        printf("Not row matrix");
    }
    return 0;
}

// Input
// 1 3
// 1 2 3