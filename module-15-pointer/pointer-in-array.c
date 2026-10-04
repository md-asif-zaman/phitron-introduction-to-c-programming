// #include <stdio.h>

// int main()
// {

//     int a[5] = {10, 20, 30, 40, 50};
//     // printf("%p\n", &a[0]);    // 0 index address
//     // printf("%p\n", a);        // 0 index address
//     // printf("%d\n", *a);       // 0 index value
//     // printf("%d\n", *(a + 1)); // 1 index value

//     printf("%d", *(a + 1));
//     return 0;
// }

#include <stdio.h>

int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    printf("%d", *(a + 1));
    return 0;
}