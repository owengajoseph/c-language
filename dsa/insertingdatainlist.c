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
    head=temp;


    head->next = temp;

    return;
}

void print()
{
    struct node *temp = head;

    printf("list is");
    while (temp->next != NULL)
    {
        printf("%d", temp->data);
        return;
    }
}

int main()
{
    head = NULL;
    int n, i, x;
    printf("how many numbers");

    scanf("%d", &n);
    printf("enter numbers");
    for (i = 0; i <= n; i++)
    {

        scanf("%d", &x);
        insert(x);
         print();
        
    }
    print();
}