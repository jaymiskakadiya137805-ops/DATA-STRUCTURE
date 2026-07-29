#include <stdio.h>

#define MAX 5

int stack[MAX];
int top = -1;

// Push
void push()
{
    int value;

    if(top == MAX - 1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        printf("Enter value: ");
        scanf("%d", &value);
        top++;
        stack[top] = value;
    }
}

// Pop
void pop()
{
    if(top == -1)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        printf("Deleted Element = %d\n", stack[top]);
        top--;
    }
}

// Print
void print()
{
    int i;

    if(top == -1)
    {
        printf("Stack is Empty\n");
    }
    else
    {
        printf("Stack Elements:\n");
        for(i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}

// Peek
void peek()
{
    if(top == -1)
    {
        printf("Stack is Empty\n");
    }
    else
    {
        printf("Top Element = %d\n", stack[top]);
    }
}

// Change
void change()
{
    int pos, value;

    printf("Enter position from top: ");
    scanf("%d", &pos);

    if(top - pos + 1 < 0)
    {
        printf("Invalid Position\n");
    }
    else
    {
        printf("Enter new value: ");
        scanf("%d", &value);

        stack[top - pos + 1] = value;
        printf("Value Changed Successfully\n");
    }
}

int main()
{
    int choice;

    do
    {
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Print");
        printf("\n4. Peek");
        printf("\n5. Change");
        printf("\n6. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: print(); break;
            case 4: peek(); break;
            case 5: change(); break;
            case 6: printf("Program End\n"); break;
            default: printf("Invalid Choice\n");
        }

    } while(choice != 6);

    return 0;
}
