#include <bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    struct Node *left;
    struct Node *right;
};

vector<int>pre(struct Node *root){
    stack<struct Node *>S;
    vector<int>A;
    struct Node *node=root;
    while(node!=NULL || !S.empty()){
        while(node!= NULL){
            A.push_back(node->val);
            S.push(node);
            node=node->left;
        }
        if(!S.empty()){
            node=S.top();
            S.pop();
            node=node->right;
        }
    }
    return A;
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


    printf("\nInorder : ");
    vector<int>sol;
    sol=pre(root);
    for(auto i:sol)
        cout<<i<<" ";
    cout<<endl;


    // printf("\nPostorder : ");
    // post(root);
    


    return 0;
}