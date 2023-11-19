#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *head;
void insert(int data, int n)
{
    struct node *temp1 = malloc(sizeof(struct node));
    temp1->data = data;
    temp1->next = NULL;
    if (n == 1)
    {
        temp1->next = head;
        head = temp1;

        return;
    }
    struct node *temp2 = head;

    for (int i = 0; i < n - 2; i++)
    {
        temp2 = temp2->next;
    }
    temp1->next = temp2->next;
    temp2->next = temp1;
}
void print()
{

    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d\n", temp->data)
        temp = temp->next;
    }
}
// print the list
void delete(int n)
{ // fun to delete node
    struct node *temp1 = head;
    // temp1 points to (n-1) th node
    for (int i = 0; i < n - 2; i++)
    {
        temp1 = temp1->next;
    }
    struct node *temp2 = temp1->next;
    temp1->next = temp2->next;

    free(temp2);
}

int main()
{
    int n;
    head = NULL;
    insert(4, 1);
    insert(5, 2);
    insert(3, 5);
    insert(6, 4);
    insert(1, 5);
    print();
    printf("enter position you want to delete\n");
    scanf("%d", &n);
    delete (n);
    print();
}
