#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *head, *temp, *del;

    head = (struct node*)malloc(sizeof(struct node));
    head->data = 10;

    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = 20;

    head->next = temp;

    temp->next = (struct node*)malloc(sizeof(struct node));
    temp->next->data = 30;
    temp->next->next = NULL;

    printf("Before Delete: 10 -> 20 -> 30\n");

    temp = head;

    while(temp->next->data != 20)
    {
        temp = temp->next;
    }

    del = temp->next;
    temp->next = del->next;
    free(del);

    printf("After Delete Specific: 10 -> 30");

    return 0;
}
