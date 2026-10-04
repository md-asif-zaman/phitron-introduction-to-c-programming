// // https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/G
// #include <stdio.h>

// void maxMin(int a[], int n)
// {
//     int max = a[0];
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] > max)
//         {
//             max = a[i];
//         }
//     }
//     int min = a[0];
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] < min)
//         {
//             min = a[i];
//         }
//     }

//     printf("%d %d", min, max);
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

//     maxMin(a, n);

//     return 0;
// }

#include <stdio.h>
#include <limits.h>

void maxMin(int a[], int n)
{
    int max = INT_MIN;
    int min = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }

    printf("%d %d", min, max);
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

    maxMin(a, n);

    return 0;
}