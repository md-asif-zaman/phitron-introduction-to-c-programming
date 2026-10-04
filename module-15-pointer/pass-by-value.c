// #include <stdio.h>

// void fun(int x)
// {
//     x = 20;
//     printf("Fun function: %p\n", &x);
// }

// int main()
// {

//     int x = 10;
//     fun(x);

//     printf("Main function: %p\n", &x);

//     return 0;
// }

#include <stdio.h>

void fun(int x)
{
    x = 20;
    printf("%p\n", &x);
}

int main()
{
    int x = 10;

    fun(x);

    printf("%d\n", x);
    printf("%p\n", &x);

    return 0;
}