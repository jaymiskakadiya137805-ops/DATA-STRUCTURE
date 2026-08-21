#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

/* Create List */
void create()
{
    int n, i, value;
    struct node *newnode, *temp;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter value: ");
        scanf("%d", &value);

        newnode = (struct node*)malloc(sizeof(struct node));
        newnode->data = value;
        newnode->next = NULL;

        if(head == NULL)
            head = newnode;
        else
        {
            temp = head;
            while(temp->next != NULL)
                temp = temp->next;

            temp->next = newnode;
        }
    }
}

/* Display */
void display()
{
    struct node *temp = head;

    if(head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    printf("List: ");
    while(temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

/* Insert at Starting */
void insertStart()
{
    int value;
    struct node *newnode;

    printf("Enter value: ");
    scanf("%d", &value);

    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = head;
    head = newnode;
}

/* Insert at End */
void insertEnd()
{
    int value;
    struct node *newnode, *temp;

    printf("Enter value: ");
    scanf("%d", &value);

    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = NULL;

    if(head == NULL)
        head = newnode;
    else
    {
        temp = head;
        while(temp->next != NULL)
            temp = temp->next;

        temp->next = newnode;
    }
}

/* Insert After Specific Node */
void insertAfter()
{
    int key, value;
    struct node *temp, *newnode;

    printf("Enter node value after which to insert: ");
    scanf("%d", &key);

    printf("Enter new value: ");
    scanf("%d", &value);

    temp = head;

    while(temp != NULL && temp->data != key)
        temp = temp->next;

    if(temp == NULL)
    {
        printf("Node not found\n");
        return;
    }

    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = temp->next;
    temp->next = newnode;
}

/* Insert Before Specific Node */
void insertBefore()
{
    int key, value;
    struct node *temp, *newnode;

    printf("Enter node value before which to insert: ");
    scanf("%d", &key);

    printf("Enter new value: ");
    scanf("%d", &value);

    if(head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    if(head->data == key)
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        newnode->data = value;
        newnode->next = head;
        head = newnode;
        return;
    }

    temp = head;

    while(temp->next != NULL && temp->next->data != key)
        temp = temp->next;

    if(temp->next == NULL)
    {
        printf("Node not found\n");
        return;
    }

    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = temp->next;
    temp->next = newnode;
}

/* Delete First */
void deleteFirst()
{
    struct node *temp;

    if(head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    temp = head;
    head = head->next;
    free(temp);
}

/* Delete Last */
void deleteLast()
{
    struct node *temp;

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

    while(temp->next->next != NULL)
        temp = temp->next;

    free(temp->next);
    temp->next = NULL;
}

/* Delete Specific Node */
void deleteSpecific()
{
    int key;
    struct node *temp, *del;

    printf("Enter node value to delete: ");
    scanf("%d", &key);

    if(head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    if(head->data == key)
    {
        temp = head;
        head = head->next;
        free(temp);
        return;
    }

    temp = head;

    while(temp->next != NULL && temp->next->data != key)
        temp = temp->next;

    if(temp->next == NULL)
    {
        printf("Node not found\n");
        return;
    }

    del = temp->next;
    temp->next = del->next;
    free(del);
}

/* Main */
int main()
{
    int choice;

    while(1)
    {
        printf("\n--- Singly Linked List ---\n");
        printf("1. Create\n");
        printf("2. Display\n");
        printf("3. Insert at Starting\n");
        printf("4. Insert at End\n");
        printf("5. Insert After Specific Node\n");
        printf("6. Insert Before Specific Node\n");
        printf("7. Delete First Node\n");
        printf("8. Delete Last Node\n");
        printf("9. Delete Specific Node\n");
        printf("10. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1: create(); break;
            case 2: display(); break;
            case 3: insertStart(); break;
            case 4: insertEnd(); break;
            case 5: insertAfter(); break;
            case 6: insertBefore(); break;
            case 7: deleteFirst(); break;
            case 8: deleteLast(); break;
            case 9: deleteSpecific(); break;
            case 10: exit(0);
            default: printf("Invalid choice\n");
        }
    }

    return 0;
}
