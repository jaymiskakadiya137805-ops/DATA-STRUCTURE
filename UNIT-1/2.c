//Create an array of size 10, input values and display sum and average of all elements in the array.


#include <stdio.h>

int main()
{
    int a[10];
    int i, sum = 0;
    float avg;

    printf("Enter 10 numbers:\n");

    for(i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    avg = sum / 10.0;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f", avg);

    return 0;
}
