#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *head, *newnode, *temp;

    head = (struct node*)malloc(sizeof(struct node));
    newnode = (struct node*)malloc(sizeof(struct node));

    head->data = 10;
    head->next = NULL;

    newnode->data = 20;
    newnode->next = NULL;

    temp = head;

    while(temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newnode;

    printf("List: %d -> %d", head->data, head->next->data);

    return 0;
}
