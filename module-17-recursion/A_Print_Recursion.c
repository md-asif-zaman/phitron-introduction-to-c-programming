// #include <stdio.h>

// void print_recursion(int n)
// {

//     if (n == 0)
//     {
//         return;
//     }

//     printf("I love Recursion\n");
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

    if (i == n)
    {
        return;
    }
    printf("I love Recursion\n");
    rec(i + 1, n);
}

int main()
{
    int n;
    scanf("%d", &n);

    rec(0, n);
    return 0;
}