// #include <stdio.h>

// int is_palindrome(char a[])
// {
//     int i = 0;
//     int j = strlen(a) - 1;

//     if (j == 0)
//     {
//         return 1;
//     }

//     while (i < j)
//     {
//         if (a[i] != a[j])
//         {

//             return 0;
//         }

//         i++;
//         j--;
//     }
//     return 1;
// }

// int main()
// {

//     char a[1001];
//     scanf("%s", &a);

//     int p = is_palindrome(a);

//     if (p == 1)
//     {
//         printf("Palindrome");
//     }
//     else if (p == 0)
//     {
//         printf("Not Palindrome");
//     }

//     return 0;
// }

#include <stdio.h>
#include <string.h>

int is_palindrome(char s[])
{
    int len = strlen(s);

    int i = 0, j = len - 1;

    int isPal = 1;

    while (i < j)
    {
        if (s[i] != s[j])
        {
            isPal = 0;
            break;
        }

        i++;
        j--;
    }

    return isPal;
}

int main()
{
    char s[10001];
    scanf("%s", &s);

    int ans = is_palindrome(s);

    if (ans == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }

    return 0;
}