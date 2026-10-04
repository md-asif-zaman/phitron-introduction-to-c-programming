// #include <stdio.h>

// void swap(int *p, int *q)
// {
//     int temp = *p;
//     *p = *q;
//     *q = temp;
// }

// int main()
// {

//     int a = 6, b = 5;
//     swap(&a, &b);
//     printf("%d %d\n", a, b);
//     return 0;
// }

#include <stdio.h>

void swap(int *a, int *b)
{

    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 10, b = 20;

    swap(&a, &b);

    printf("%d %d", a, b);
    return 0;
}