// https://docs.google.com/document/d/1xhF5KOCzEu-6HGqsW6X1BFTUpIUekQCZ/edit

// #include <stdio.h>

// int my_abs(int n)
// {
//     if (n < 0)
//     {
//         int abs = n * -1;
//         return abs;
//     }
//     else
//     {
//         return n;
//     }
// }

// int main()
// {
//     int n;
//     scanf("%d", &n);

//     int result = my_abs(n);
//     printf("%d", result);
//     return 0;
// }

#include <stdio.h>

int my_abs(int n)
{
    if (n < 0)
    {
        return n * -1;
    }
    else
    {
        return n;
    }
}

int main()
{

    int n;
    scanf("%d", &n);

    int ans = my_abs(n);
    printf("%d", ans);

    return 0;
}