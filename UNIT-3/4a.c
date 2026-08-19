#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *head, *temp;

    head = (struct node*)malloc(sizeof(struct node));
    head->data = 10;

    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = 20;

    head->next = temp;
    temp->next = NULL;

    printf("Before Delete: 10 -> 20\n");

    temp = head;
    head = head->next;
    free(temp);

    printf("After Delete First: 20");

    return 0;
}
