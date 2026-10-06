// #include <stdio.h>

// void array_recursion(int a[], int n, int i)
// {

//     if (i >= n)
//     {
//         return;
//     }

//     array_recursion(a, n, i + 1);
//     printf("%d ", a[i]);
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

//     array_recursion(a, n, 0);

//     return 0;
// }

#include <stdio.h>

void rec(int a[], int i, int n)
{

    if (i == n)
    {
        return;
    }
    rec(a, i + 1, n);
    if (i % 2 == 0)
    {
        printf("%d\n", a[i]);
    }
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

    rec(a, 0, n);
    return 0;
}