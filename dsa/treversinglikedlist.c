#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};
//trevers func
/*void count_of_node(struct node *head)
{
    int count = 0;
    if (head == NULL){
    
        printf("linked list is empty");
    }
    struct node *ptr = NULL;
    ptr = head;

    while (ptr != NULL)
    {
        count++;
        ptr = ptr->link;
    }
    printf("the number of list is %d", count);
}*/

// the main func 
struct node *head;

int main()
{


    struct node *firstnode;
    firstnode = malloc(sizeof(struct node));
    firstnode->data = 45;
    firstnode->link = NULL;

    struct node *secondnode = malloc(sizeof(struct node));

    secondnode->data = 98;
    secondnode->link = NULL;
    firstnode->link = secondnode;

    // assigning new memory to the secondode


    secondnode = malloc(sizeof(struct node));
    secondnode->data = 70;
    secondnode->link = NULL;
    secondnode->link = secondnode;

    // head->link stores the address of secondnode
    
    head= firstnode;
    printf("the value is %d",head->data);

    //count_of_node(head);
}