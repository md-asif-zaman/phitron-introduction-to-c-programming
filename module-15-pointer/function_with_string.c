// #include <stdio.h>

// void fun(char s[])
// {
//     printf("%s\n", s);

//     int sz = strlen(s);
//     printf("%d", sz);
// }

// int main()
// {

//     char s[10];
//     scanf("%s", &s);

//     fun(s);

//     return 0;
// }

#include <stdio.h>
#include <string.h>

void func(char s[])
{
    printf("%d", strlen(s));
}

int main()
{

    char s[10] = "Hello";

    func(s);
    return 0;
}
