#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;

};



struct node *insert( struct node *head, int data) {
    struct node*temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->next=NULL;

    if(head==NULL) {
        head=temp;
    } else {

        struct  node*temp1=head;

        while(1) {

            if(temp1->next==NULL) {
                temp1->next=temp;

                break;
            }
            temp1=temp1->next;
        }
    }
    return head;
}







void print( struct node* head) {// printing function to print the values
    while(head !=NULL) {
        printf("%d",head->data);
        head=head->next;
    }
}

struct  node* reverse(struct node* head) {// function to sort backwards
    struct node *prev,*current,*next;
    current=head;
    prev=NULL;

    while(current!=NULL) {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
}

struct node *head=NULL;
int main() {
    head=insert(head,4);
    head=insert(head,2);
    head=insert(head,6);
    head=insert(head,8);
    print(head);
    head=reverse(head);
    print(head);

}
