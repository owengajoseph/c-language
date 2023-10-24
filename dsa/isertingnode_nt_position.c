#include <stdio.h>
#include <stdlib.h>
struct node
{

    int data;
    struct node *next;
};
struct node *head; // golabal structure variable


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
    printf("%d\n", *temp2->next);
    for (int i = 0; i < n - 1; i++)
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
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

int main()
{
    head = NULL;  // empy list
    insert(2, 1); // list : 2
    insert(3, 2); // list :2,3
    insert(4, 1); // list :4,3,2,1
    insert(5, 2); // list : 4,5,2,3
    print();
}