#include <stdio.h>
#include <stdlib.h>
struct node *head; // global varible head
struct node
{
    int data;
    struct node *next;
};

void insert(int x)
{
    // function to insert values into the nodes
    struct node *temp = malloc(sizeof(struct node));
    temp->data = x;
    temp->next = NULL;
    head = temp;
}

void print()
{
    struct node *temp = head;

    printf("list is");
    while (temp != NULL)
    {
        printf("%d", temp->data);
    }
}

int main()
{
    head = NULL;
    printf("how many numbers");
    int n, i, x;
    scanf("%d\n", &n);
    printf("enter numbers");
    for (i = 0; i <= n)
    {
        scanf("%d", &x);
    }
    insert(x);
}