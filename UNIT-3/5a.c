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

    head->data = 10;
    head->next = newnode;

    newnode->data = 20;
    newnode->next = NULL;

    printf("Linked List Created");

    return 0;
}
