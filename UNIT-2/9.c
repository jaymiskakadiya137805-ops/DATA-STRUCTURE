#include <stdio.h>

int queue[5];
int front = -1, rear = -1;

void insert()
{
    int x;
    if (rear == 4)
        printf("Queue Overflow\n");
    else
    {
        if (front == -1)
            front = 0;
        printf("Enter element: ");
        scanf("%d", &x);
        rear++;
        queue[rear] = x;
    }
}

void delet()
{
    if (front == -1 || front > rear)
        printf("Queue Underflow\n");

    else
    {
        printf("Deleted element = %d\n", queue[front]);
        front++;
    }
}

void display()
{
    int i;
    if (front == -1 || front > rear)
        printf("Queue is Empty\n");
    else
    {
        printf("Queue elements: ");
        for (i = front; i <= rear; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
}

int main()
{
   int choice;

    do
    {
        printf("\n1. insert");
        printf("\n2. delet");
        printf("\n3. display");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1: insert(); break;
            case 2: delet(); break;
            case 3: display(); break;
            case 4: printf("Program End\n"); break;
            default: printf("Invalid Choice\n");
        }

    } while(choice != 4);

    return 0;
}


