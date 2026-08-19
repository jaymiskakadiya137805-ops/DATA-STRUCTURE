#include <stdio.h>

int min(int a[], int n)
{
    if(n == 1)
        return a[0];

    int m = min(a, n - 1);

    if(a[n - 1] < m)
        return a[n - 1];
    else
        return m;
}

int max(int a[], int n)
{
    if(n == 1)
        return a[0];

    int m = max(a, n - 1);

    if(a[n - 1] > m)
        return a[n - 1];
    else
        return m;
}

int main()
{
    int a[] = {10, 5, 20, 3, 15};
    int n = 5;

    printf("Minimum = %d\n", min(a, n));
    printf("Maximum = %d\n", max(a, n));

    return 0;
}
