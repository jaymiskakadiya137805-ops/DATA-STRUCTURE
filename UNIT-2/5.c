#include <stdio.h>

#define MAX 100

int stack[MAX];
int top = -1;

// Push
void push(int x)
{
    stack[++top] = x;
}

// Pop
int pop()
{
    return stack[top--];
}

int main()
{
    int base, power, i;
    int result = 1;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter power: ");
    scanf("%d", &power);

    // Push base into stack 'power' times
    for(i = 1; i <= power; i++)
    {
        push(base);
    }

    // Pop and multiply
    while(top != -1)
    {
        result = result * pop();
    }

    printf("Power = %d\n", result);

    return 0;
}
