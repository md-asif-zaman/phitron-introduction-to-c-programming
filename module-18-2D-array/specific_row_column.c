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
//     int specific_col;
//     scanf("%d", &specific_col);

//     for (int i = 0; i < r; i++)
//     {
//         printf("%d\n", a[i][specific_col]);
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{
    int row, col;
    scanf("%d %d", &row, &col);

    int a[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int r;
    scanf("%d", &r);

    for (int i = 0; i < col; i++)
    {
        printf("%d ", a[r][i]);
    }
    return 0;
}