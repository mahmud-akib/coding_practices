#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void LinkListed(struct Node *ptr)
{
    int i = 0;
    while (ptr != NULL)
    {
        i++;
        printf("\nElement Number : %d\n", i);
        printf("Element : %d\n", ptr->data);
        printf("Address = %x\n", ptr);
        ptr = ptr->next;
    }
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 7;
    head->next = second;

    second->data = 11;
    second->next = third;

    third->data = 41;
    third->next = fourth;

    fourth->data = 77;
    fourth->next = NULL;

    LinkListed(head);

    return 0;
}