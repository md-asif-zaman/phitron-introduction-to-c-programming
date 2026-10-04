// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/B
// #include <stdio.h>

// void printN(int n)
// {

//     for (int i = 1; i <= n; i++)
//     {
//         if (i == n)
//         {
//             printf("%d", i);
//         }
//         else
//         {
//             printf("%d ", i);
//         }
//     }
// }

// int main()
// {
//     int n;
//     scanf("%d", &n);

//     printN(n);

//     return 0;
// }

#include <stdio.h>

void printN(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }
}

int main()
{

    int n;
    scanf("%d", &n);

    printN(n);
    return 0;
}