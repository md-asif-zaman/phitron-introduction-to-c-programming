// #include <stdio.h>

// void count_odd(int a[], int n)
// {

//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] % 2 != 0)
//         {
//             sum++;
//         }
//     }
//     printf("%d", sum);
// }

// int main()
// {

//     int n;
//     scanf("%d", &n);

//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     count_odd(a, n);

//     return 0;
// }

#include <stdio.h>

int count_odd(int a[], int n)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int ans = count_odd(a, n);
    printf("%d", ans);

    return 0;
}