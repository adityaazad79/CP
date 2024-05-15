#include <stdio.h>
#include <stdlib.h>

struct Node{
    int val;
    struct Node *left;
    struct Node *right;
};

void pre(struct Node *root){
    if(root==NULL)
        return;
    printf("%d ",root->val);
    pre(root->left);
    pre(root->right);
}

void in(struct Node *root){
    if(root==NULL)
        return;
    in(root->left);
    printf("%d ",root->val);
    in(root->right);
}

void post(struct Node *root){
    if(root==NULL)
        return;
    post(root->left);
    post(root->right);
    printf("%d ",root->val);
}

int main()
{
    struct Node *root=(struct Node *)malloc(sizeof(struct Node));
    root->val=10;
    root->left=NULL;
    root->right=NULL;

    struct Node *c1=(struct Node *)malloc(sizeof(struct Node));
    root->left=c1;
    c1->val=12;
    c1->left=NULL;
    c1->right=NULL;

    struct Node *c2=(struct Node *)malloc(sizeof(struct Node));
    root->right=c2;
    c2->val=13;
    c2->left=NULL;
    c2->right=NULL;

    struct Node *c3=(struct Node *)malloc(sizeof(struct Node));
    c1->left=c3;
    c3->val=15;
    c3->left=NULL;
    c3->right=NULL;

    struct Node *c4=(struct Node *)malloc(sizeof(struct Node));
    c1->right=c4;
    c4->val=23;
    c4->left=NULL;
    c4->right=NULL;

    struct Node *c5=(struct Node *)malloc(sizeof(struct Node));
    c2->left=c5;
    c5->val=9;
    c5->left=NULL;
    c5->right=NULL;

    struct Node *c6=(struct Node *)malloc(sizeof(struct Node));
    c2->right=c6;
    c6->val=3;
    c6->left=NULL;
    c6->right=NULL;

    printf("Preorder : ");
    pre(root);

    printf("\nInorder : ");
    in(root);

    printf("\nPostorder : ");
    post(root);
    


    return 0;
}