#include <stdio.h>

int main() {
    int A[3], B[3], C[6];
    int i;

    printf("Enter 3 elements for A: ");
    for(i = 0; i < 3; i++) {
        scanf("%d", &A[i]);
    }

    printf("Enter 3 elements for B: ");
    for(i = 0; i < 3; i++) {
        scanf("%d", &B[i]);
    }

    for(i = 0; i < 3; i++) {
        C[i] = A[i];
    }

    for(i = 0; i < 3; i++) {
        C[i + 3] = B[i];
    }

    printf("Merged Array C: ");
    for(i = 0; i < 6; i++) {
        printf("%d ", C[i]);
    }

    return 0;
}
