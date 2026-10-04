// #include <stdio.h>

// int my_len(char a[])
// {
//     int sum = 0;

//     for (int i = 0; a[i] != '\0'; i++)
//     {
//         sum++;
//     }
//     return sum;
// }

// int main()
// {
//     char a[1000];
//     scanf("%s", &a);

//     int result = my_len(a);
//     printf("%d", result);

//     return 0;
// }

#include <stdio.h>

int count(char s[])
{

    int count = 0;

    for (int i = 0; s[i] != '\0'; i++)
    {
        count++;
    }

    return count;
}

int main()
{

    char ch[101];
    scanf("%s", &ch);

    int ans = count(ch);
    printf("%d", ans);
    return 0;
}