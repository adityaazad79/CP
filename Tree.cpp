#include <bits/stdc++.h>

using namespace std;

struct Node{
    int val;
    struct Node *left;
    struct Node *right;
};

vector<int>ans;
vector<int> in(struct Node *root){
    if(root==NULL)
        return ans;
    in(root->left);
    // printf("%d ",root->val);
    ans.push_back(root->val);
    in(root->right);
    return ans;
}



vector<int> inorderTraversal(struct Node *A)
{
    stack<struct Node *> st;
    struct Node *node = A;
    vector<int> v;
    while (true)
    {
        if (node != NULL)
        {
            st.push(node);
            node = node->left;
        }
        else
        {
            if (st.empty() == true)
                break;
            node = st.top();
            st.pop();
            v.push_back(node->val);
            node = node->right;
        }
    }
    return v;
}






vector<int> preorderTraversal(struct Node* A)
{
    vector<int>v;
    if(A==NULL)
        return v;
    stack<struct Node*>s;
    s.push(A);
    while(s.empty()==false)
    {
        struct Node* curr=s.top();
        v.push_back(curr->val);
        s.pop();
       
        if(curr->right!=NULL)
        {
            s.push(curr->right);
        }
        if(curr->left!=NULL)
        {
            s.push(curr->left);
        }
    }
return v;
}


vector<int> preorderTraversal2(struct Node *A)
{
    stack<struct Node *> st;
    struct Node *node = A;
    vector<int> v;
    while (true)
    {
        if (node != NULL)
        {
            st.push(node);
            node = node->left;
        }
        else
        {
            if (st.empty() == true)
                break;
            node = st.top();
            st.pop();
            v.push_back(node->val);
            node = node->right;
        }
    }
    return v;
}


vector<int> preorderTraversal3(struct Node *A) {
    stack<struct Node *> st;
    struct Node *node = A;
    vector<int> v;
    while (node != NULL || !st.empty()) {
        while (node != NULL) {
            v.push_back(node->val);
            st.push(node);
            node = node->left;
        }
        if (!st.empty()) {
            node = st.top();
            st.pop();
            node = node->right;
        }
    }
    return v;
}

// vector<int> preorderTraversal(struct Node *A) {
//     stack<struct Node *> st;
//     struct Node *node = A;
//     vector<int> v;
//     while (node != NULL || !st.empty()) {
//         while (node != NULL) {
//             v.push_back(node->val); // Visit the root node
//             st.push(node); // Push root node to stack
//             node = node->left; // Move to left subtree
//         }
//         if (!st.empty()) {
//             node = st.top(); // Backtrack to the nearest ancestor node that has a right child
//             st.pop();
//             node = node->right; // Move to right subtree
//         }
//     }
//     return v;
// }


vector<int> postorderTraversal(struct Node *A) {
    if (A == NULL)
        return vector<int>(); // Return an empty vector if the tree is empty

    stack<struct Node *> st1, st2;
    struct Node *node = A;
    st1.push(node);

    // Run while first stack is not empty
    while (!st1.empty()) {
        // Pop an item from s1 and push it to s2
        node = st1.top();
        st1.pop();
        st2.push(node);

        // Push left and right children of removed item to s1
        if (node->left)
            st1.push(node->left);
        if (node->right)
            st1.push(node->right);
    }

    // Print all elements of second stack
    vector<int> postorder;
    while (!st2.empty()) {
        node = st2.top();
        st2.pop();
        postorder.push_back(node->val);
    }
    return postorder;
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

    // printf("Preorder : ");
    // pre(root);

    printf("\nInorder : ");
    // in(root);
    vector<int>sol;
    // sol=in(root);
    // sol=inorderTraversal(root);
    // sol=preorderTraversal3(root);
    sol=postorderTraversal(root);

    for(auto i:sol)
        cout<<i<<" ";
    cout<<endl;


    // printf("\nPostorder : ");
    // post(root);
    


    return 0;
}