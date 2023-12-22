#include <stdio.h>
#include <stdlib.h>
struct bstnode{
    int data;
    struct bstnode *left;
    struct  bstnode*right;
};

// insert values into memory
struct bstnode* getnewnode(int data) {
    struct bstnode *newnode=(bstnode*)malloc(sizeof ( bstnode));
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}

// take values to the getnewnode function
struct bstnode* insert(struct bstnode*root, int data ) {


    if (root==NULL) {
        root =getnewnode(data);

    } else if (data <=root ->data) {
        root->left=insert(root->left,data);
    } else {
        root->right=insert(root->right,data);
    }
    return root;


}


int main() {
    struct bstnode*root;
    root=NULL;
    root=insert(root,10);
    root=insert(root,15);
    root=insert(root,20);
}
