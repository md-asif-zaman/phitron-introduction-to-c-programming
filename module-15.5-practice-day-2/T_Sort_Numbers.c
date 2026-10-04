#include <stdio.h>

int main()
{

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int x = a;
    int y = b;
    int z = c;

    if (x > y)
    {
        int temp = y;
        y = x;
        x = temp;
    }
    if (x > z)
    {
        int temp = z;
        z = x;
        x = temp;
    }
    if (y > z)
    {
        int temp = z;
        z = y;
        y = temp;
    }

    printf("%d\n%d\n%d\n\n", x, y, z);
    printf("%d\n%d\n%d\n", a, b, c);

    return 0;
}