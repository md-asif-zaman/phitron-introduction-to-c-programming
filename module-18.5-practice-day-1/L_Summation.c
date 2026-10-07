// #include <stdio.h>

// long long recursion_sum(long long a[], int n, int i, long long sum)
// {
//     if (i == n)
//     {
//         return sum;
//     }

//     sum = sum + a[i];
//     recursion_sum(a, n, i + 1, sum);
// }

// int main()
// {
//     int n;
//     scanf("%d", &n);

//     long long a[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%lld", &a[i]);
//     }

//     long long sum = recursion_sum(a, n, 0, 0);
//     printf("%lld\n", sum);
//     return 0;
// }

#include <stdio.h>

int rec(int i, int sum, int a[], int n)
{
    if (i == n)
    {
        return sum;
    }

    sum += a[i];

    rec(i + 1, sum, a, n);
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

    int ans = rec(0, 0, a, n);
    printf("%d", ans);

    return 0;
}