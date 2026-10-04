#include <stdio.h>

void reverse(int a[], int n)
{
    int i = 0, j = n - 1;
    while (i < j)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;

        i++;
        j--;
    }

    return a;
}

int main()
{
    int a[5] = {10, 20, 30, 40, 50};

    int b = reverse(a, 5);

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", b[i]);
    }
    return 0;
}