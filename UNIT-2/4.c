#include <stdio.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push(int x)
{
    top++;
    stack[top] = x;
}

int pop()
{
    return stack[top--];
}

int main()
{
    int n, i;
    int fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Push numbers into stack
    for(i = 1; i <= n; i++)
    {
        push(i);
    }

    // Pop and calculate factorial
    while(top != -1)
    {
        fact = fact * pop();
    }

    printf("Factorial = %d\n", fact);

    return 0;
}
