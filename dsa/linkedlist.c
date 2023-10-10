#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};
int head = NULL;
int main()
{
    struct node *firstnode = malloc(sizeof(struct node));
    firstnode->data = 45;
    firstnode->link = NULL;
    printf("%d\n", firstnode->data);

    struct node *secondnode = malloc(sizeof(struct node));

    secondnode->data = 98;
    secondnode->link = secondnode;
    firstnode->link = secondnode;

    

    secondnode = malloc(sizeof(struct node));
    secondnode->data = 70;
    secondnode->link = NULL;
    head = firstnode;
    // head->link stores the address of secondnode
    return 0;
}
