#include <iostream>

struct node {
    int data;
    struct node* link;


};
struct node *top=NULL; // my stack is empty

void push(int x) {
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->link=top;
    top=temp;
}
vod pop() {
    struct node *temp;
    if(top==NULL) {
        return;        // remove element

    }
    temp=top;
    top=top->link;
    free(temp);
}
