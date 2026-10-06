#include <stdio.h>

void mello()
{
    printf("Mello\n");
}

void gello()
{

    mello();
    printf("Gello\n");
}

void hello()
{

    gello();
    printf("Hello\n");
}

int main()
{

    hello();
    printf("HI\n");

    return 0;
}
