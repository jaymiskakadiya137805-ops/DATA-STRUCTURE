//. Create arrays A, B and C of size 3, perform C = A + B.

#include <stdio.h>

int main()
{
    int A[3], B[3], C[3];
    int i;

    printf("Enter 3 elements of A:\n");
    for(i = 0; i < 3; i++)
    {
        scanf("%d", &A[i]);
    }

    printf("Enter 3 elements of B:\n");
    for(i = 0; i < 3; i++)
    {
        scanf("%d", &B[i]);
    }

    for(i = 0; i < 3; i++)
    {
        C[i] = A[i] + B[i];
    }

    printf("Array C:\n");
    for(i = 0; i < 3; i++)
    {
        printf("%d ", C[i]);
    }

    return 0;
}
