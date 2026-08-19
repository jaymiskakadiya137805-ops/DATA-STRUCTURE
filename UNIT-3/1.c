#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *start = NULL, *newnode, *temp;
    int n, i, value;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));

        printf("Enter value: ");
        scanf("%d", &value);

        newnode->data = value;
        newnode->next = NULL;

        if(start == NULL)
        {
            start = newnode;
        }
        else
        {
            temp = start;

            while(temp->next != NULL)
            {
                temp = temp->next;
            }

            temp->next = newnode;
        }
    }

    printf("\nLinked List: ");

    temp = start;

    while(temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL");

    return 0;
}
