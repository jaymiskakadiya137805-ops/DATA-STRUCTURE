#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = NULL;

// Create Linked List
void create()
{
    struct Node *newnode, *temp;
    int n, i;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        newnode = (struct Node*)malloc(sizeof(struct Node));

        printf("Enter data: ");
        scanf("%d", &newnode->data);

        newnode->next = NULL;

        if(head == NULL)
        {
            head = newnode;
        }
        else
        {
            temp = head;

            while(temp->next != NULL)
                temp = temp->next;

            temp->next = newnode;
        }
    }
}

// Display
void display()
{
    struct Node *temp = head;

    printf("Linked List: ");

    while(temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

// Delete First Node
void deleteFirst()
{
    struct Node *temp;

    if(head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    temp = head;
    head = head->next;
    free(temp);
}

// Delete Last Node
void deleteLast()
{
    struct Node *temp, *prev;

    if(head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    if(head->next == NULL)
    {
        free(head);
        head = NULL;
        return;
    }

    temp = head;

    while(temp->next != NULL)
    {
        prev = temp;
        temp = temp->next;
    }

    prev->next = NULL;
    free(temp);
}

// Delete Specific Node
void deleteSpecific()
{
    struct Node *temp, *prev;
    int value;

    printf("Enter value to delete: ");
    scanf("%d", &value);

    if(head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    if(head->data == value)
    {
        temp = head;
        head = head->next;
        free(temp);
        return;
    }

    temp = head;

    while(temp != NULL && temp->data != value)
    {
        prev = temp;
        temp = temp->next;
    }

    if(temp == NULL)
    {
        printf("Node not found\n");
        return;
    }

    prev->next = temp->next;
    free(temp);
}

int main()
{
    int choice;

    create();

    printf("\nOriginal ");
    display();

    printf("\n1. Delete First");
    printf("\n2. Delete Last");
    printf("\n3. Delete Specific");

    printf("\nEnter choice: ");
    scanf("%d", &choice);

    if(choice == 1)
        deleteFirst();
    else if(choice == 2)
        deleteLast();
    else if(choice == 3)
        deleteSpecific();
    else
        printf("Invalid choice");

    printf("\nAfter Delete: ");
    display();

    return 0;
}
