// #include <stdio.h>

// int main()
// {

//     int x = 100;

//     int *ptr = &x;

//     printf("%p\n", x);
//     printf("%p\n", ptr);
//     printf("%p\n", &ptr);

//     *ptr = 200;

//     printf("%d\n", *ptr);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int x = 10;

//     int *p;
//     p = &x;

//     printf("%d\n", x);  // value of x
//     printf("%d\n", *p); // value of x
//     printf("%p\n", &x); // address of x
//     printf("%p\n", p);  // address of x
//     printf("%p\n", &p); // address of p pointer

//     *p = 20;           // change value of x using pointer
//     printf("%d\n", x); // value of x

//     return 0;
// }
#include <stdio.h>

int main()
{
    int x = 10;
    printf("%p\n", &x);

    int *p = &x;
    printf("%p\n", &p);

    return 0;
}