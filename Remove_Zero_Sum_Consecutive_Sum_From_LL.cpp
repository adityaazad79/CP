// https://leetcode.com/problems/remove-zero-sum-consecutive-nodes-from-linked-list/description/

#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

struct ListNode{
    int val;
    ListNode *next;
};

struct ListNode *insert_head(int e){
    ListNode *Node=(ListNode *)malloc(sizeof(ListNode));
    Node->val=e;
    Node->next=NULL;

    return Node;
}

struct ListNode *insert(ListNode *head,int e){
    ListNode *Node=(ListNode *)malloc(sizeof(ListNode));
    ListNode *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=Node;
    Node->val=e;
    Node->next=NULL;

    return head;
}

void traverse(ListNode *head){
    while(head!=NULL){
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}

struct ListNode *fun(ListNode *head){
    int size=0;
    ListNode *temp=head;
    while(temp!=NULL){
        size++;
        temp=temp->next;
    }
    int arr[size];

    temp=head;
    int id[size];
    for (int i = 0; i < size; i++)
    {
        arr[i]=temp->val;
        temp=temp->next;
        id[i]=0;
    }
    for (int i = 0; i < size; i++)
    {
        
    }
    

    

    return head;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;
    ListNode *head=(ListNode *)malloc(sizeof(ListNode));
    int e;
    cin>>e;
    n--;
    head=insert_head(e);
    while(n--){
        cin>>e;
        head=insert(head,e);
    }

    head=fun(head);

    traverse(head);

    return 0;
}