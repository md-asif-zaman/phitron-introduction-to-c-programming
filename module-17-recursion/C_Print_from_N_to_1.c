// #include <stdio.h>

// void print_recursion(int n)
// {

//     if (n == 0)
//     {
//         return;
//     }
//     if (n == 1)
//     {
//         printf("%d", n);
//     }
//     else
//     {
//         printf("%d ", n);
//     }
//     print_recursion(n - 1);
// }

// int main()
// {

//     int n;
//     scanf("%d", &n);

//     print_recursion(n);

//     return 0;
// }

#include <stdio.h>

void rec(int i, int n)
{
    if (i > n)
    {
        return;
    }

        rec(i + 1, n);
    printf("%d\n", i);
}

int main()
{

    int n;
    scanf("%d", &n);

    rec(1, n);
    return 0;
}