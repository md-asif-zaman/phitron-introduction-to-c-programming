// #include <stdio.h>

// void print_recursion(int n, int i)
// {
//     if (i > n)
//     {
//         return;
//     }

//     printf("%d\n", i);
//     print_recursion(n, i + 1);
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
    printf("%d\n", i);
    rec(i + 1, n);
}

int main()
{

    int n;
    scanf("%d", &n);

    rec(1, n);
    return 0;
}