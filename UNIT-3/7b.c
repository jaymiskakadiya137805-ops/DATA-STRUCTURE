#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *head, *newnode;

    head = (struct node*)malloc(sizeof(struct node));
    newnode = (struct node*)malloc(sizeof(struct node));

    head->data = 20;
    head->next = NULL;

    newnode->data = 10;
    newnode->next = head;
    head = newnode;

    printf("List: %d -> %d", head->data, head->next->data);

    return 0;
}
