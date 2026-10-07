// #include <stdio.h>

// void print_recursion(int n, int i)
// {

//     if (i > n)
//     {
//         return;
//     }

//     print_recursion(n, i + 1);
//     if (i == 1)
//     {
//         printf("%d", i);
//     }
//     else
//     {
//         printf("%d ", i);
//     }
// }

// int main()
// {
//     int n;
//     scanf("%d", &n);

//     print_recursion(n, 1);
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