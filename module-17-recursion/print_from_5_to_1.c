// #include <stdio.h>

// void hello(int i)
// {
//     if (i == 0)
//     {
//         return;
//     }
//     printf("%d\n", i);
//     hello(i - 1);
// }

// int main()
// {
//     int i = 6;

//     hello(i);

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