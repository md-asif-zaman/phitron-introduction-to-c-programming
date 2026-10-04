// #include <stdio.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);

//     int star = 1;
//     int space = n - 1;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int k = 1; k <= space; k++)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= star; j++)
//         {
//             if (i % 2 != 0)
//             {
//                 printf("#");
//             }
//             else
//             {
//                 printf("-");
//             }
//         }
//         printf("\n");
//         star += 2;
//         space--;
//     }

//     star = star - 4;
//     space = space + 2;
//     n = n - 1;

//     for (int i = n; i >= 1; i--)
//     {
//         for (int k = 1; k <= space; k++)
//         {
//             printf(" ");
//         }

//         for (int j = 1; j <= star; j++)
//         {
//             if (i % 2 != 0)
//             {
//                 printf("#");
//             }
//             else
//             {
//                 printf("-");
//             }
//         }
//         printf("\n");
//         star -= 2;
//         space++;
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int star = 1, space = n - 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= star; k++)
        {
            if (i % 2 != 0)
            {
                printf("#");
            }
            else
            {
                printf("-");
            }
        }
        space--;
        star += 2;
        printf("\n");
    }

    int star2 = n * 2 - 3, space2 = 1;

    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 1; j <= space2; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= star2; k++)
        {
            if (i % 2 != 0)
            {
                printf("-");
            }
            else
            {
                printf("#");
            }
        }
        space2++;
        star2 -= 2;
        printf("\n");
    }
    return 0;
}