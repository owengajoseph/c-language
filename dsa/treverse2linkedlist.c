#include <stdlib.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};

int main()
{

    struct node *firstnode = malloc(sizeof(struct node));
    firstnode->data = 45;
    firstnode->link = NULL;

    struct node *secondnode = malloc(sizeof(struct node));

    secondnode->data = 98;
    secondnode->link = NULL;
    firstnode->link = secondnode;

    // assigning new memory to the secondode
    // remember we did not free memory at the second node

    secondnode = malloc(sizeof(struct node));
    secondnode->data = 70;
    secondnode->link = NULL;
    secondnode->link = secondnode;

    // head->link stores the address of secondnode
}