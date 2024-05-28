#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr)
{
    printf("Element: ");
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        // printf("Element: %d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

// Case 1: Deleting the first element from the linked list
struct Node *deleteFirst(struct Node *head)
{
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

// Case 2: Deleting the element at a given index from the linked list
struct Node *deleteAtIndex(struct Node *head, int index)
{
    struct Node *p = head;
    struct Node *q = head->next;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }

    p->next = q->next;
    free(q);
    return head;
}

// Case 3: Deleting the last element
struct Node *deleteAtLast(struct Node *head)
{
    struct Node *p = head;
    struct Node *q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }

    p->next = NULL;
    free(q);
    return head;
}

// Case 4: Deleting the element with a given value from the linked list
struct Node *deleteValue(struct Node *head, int value)
{
    struct Node *p = head;
    struct Node *q = head->next;
    while (q->data != value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }

    if (q->data == value)
    {
        p->next = q->next;
        free(q);
    }
    return head;
}

struct Node *rotate(struct Node *head, int n)
{
    if (head->next == NULL)
    {
        return head;
    }

    int size = 0;
    struct Node *p = head;
    struct Node *q = head;
    struct Node *r = head;

    while (p != NULL)
    {
        size++;
        r = r->next;
        p = r->next;
    }
    r->next = head;
    size++;

    if (n >= size)
    {
        n = n % size;
    }

    for (int i = 0; i < size - n - 1; i++)
    {
        q = q->next;
        // if (i==size-n-2)
        // {
        //     head=q->next;
        //     q->next=NULL;
        // }
    }
    head = q->next;
    q->next = NULL;

    printf("\n*** SIZE %d ***\n", size);
    return head;
}



struct Node *reorder1(struct Node *head)
{
    if (head->next == NULL)
        return head;

    struct Node *p = head;

    int size = 0;
    while (p != NULL)
    {
        size++;
        p = p->next;
    }

    printf("*** SIZE: %d ***", size);
    p=head;
    struct Node *q=head;
    struct Node *r=head;
    struct Node *s=head;
    struct Node *t=head;
    for (int i = 0; i < size; i++)
    {
        // if (i%2==0)
        if(i==0 || i==2)
        {
            r=head;
            for (int j = 0; j < size-i-2; j++)
            {
                r=r->next;
                q=r->next;
                printf("\n**%d ", q->data);
            }
            // break;
            s=p->next;
            p->next=q;
            q->next=s;
            r->next=NULL;
            break;
        }
        t=t->next;
        p=t;
    }
    


    return head;
}


struct Node *reorder2(struct Node *head)
{
    if (head->next == NULL)
        return head;

    struct Node *p = head;

    int size = 0;
    while (p != NULL)
    {
        size++;
        p = p->next;
    }

    p=head;
    struct Node *q=head;
    struct Node *r=head;
    struct Node *t=head;
    for (int i = 0; i < size-2; i++)
    {
        if (i%2==0)
        {
            r=t;
            while (q->next!=NULL)
            {
                r=r->next;
                q=r->next;
                printf("\n**%d ", q->data);
            }
            q->next=p->next;
            p->next=r->next;
            r->next=NULL;
        }
        t=t->next;
        p=t;
    }
    
    return head;
}

struct Node *reorder(struct Node *head){
    if (head->next == NULL)
        return head;

    struct Node *p = head;

    int size = 0;
    while (p != NULL)
    {
        size++;
        p = p->next;
    }
    int arr[size];

    p=head;
    for (int i = 0; i < size; i++)
    {
        arr[i]=p->data;
        p=p->next;
    }

    for (int i = 0; i < size; i++)
    {
        printf("** E: %d",arr[i]);
    }
    p=head;
    for (int i = 0,j=1; i < size; i++)
    {
        if (i%2==0)
        {
            printf("%d ",arr[j-1]);
            p->data=arr[j-1];
        }
        else{
            printf("%d ",arr[size-j]);
            p->data=arr[size-j];
            j++;
        }
        p=p->next;
        
    }
    printf("\n\nExp\n");
    
    return head;
}

struct Node *swaplist(struct Node *head){
    if (head->next == NULL)
        return head;

    struct Node *p = head;

    int size = 0;
    while (p != NULL)
    {
        size++;
        p = p->next;
    }
    int arr[size];

    p=head;
    for (int i = 0; i < size; i++)
    {
        arr[i]=p->data;
        p=p->next;
    }

    for (int i = 0; i < size; i++)
    {
        printf("** E: %d",arr[i]);
    }

    p=head;
    for (int i = 1; i < size; i+=2)
    {
        p->data=arr[i];
        p=p->next;
        p->data=arr[i-1];
        p=p->next;
    }

    return head;
}

struct Node *removeNthNodeFromEnd(struct Node *head, int B){
    if(B==0)
        return head;
    else if(head->next == NULL)
    {
        return NULL;
    }

    struct Node *p = head;

    int size = 0;
    while (p != NULL)
    {
        size++;
        p = p->next;
    }
    
    if (B>size)
        B=size;    

    int arr[size];
    p=head;
    int skip=size-B, flag=0, i=0;
    for (i = 0; i < size; i++)
    {
        if (i==skip){
            flag = 1;
            p=p->next;
            continue;        
        }
        if (flag)
            arr[i-1]=p->data;
        else
            arr[i]=p->data;
        p=p->next;
    }
    
    p=head;
    for (i = 0; i < size-2; i++)
    {
        p->data=arr[i];
        p=p->next;
    }
    p->data=arr[i];
    p->next=NULL;

    return head;
}

// struct Node *removeNthNodeFromEnd(struct Node *head, int B){
//     struct Node *p=head;
//     while(B-- && p->next)
//         p=p->next;

//     struct Node *q=head;
    


//     return head;
// }

struct Node *insertionSort(struct Node *head, int n){
    struct Node *p=head->next;
    struct Node *q=head;
    struct Node *temp;



    return head;
}

struct Node *cycle(struct Node *head){
    // void *arr[10];

    // arr[0]=(void *)head;
    // arr[1]=(void *)head->next;
    // arr[2]=(void *)head->next->next;

    // printf("\n*** %p ***\n", arr[0]);
    // printf("\n*** %p ***\n", arr[1]);
    // printf("\n*** %p ***\n", arr[2]);

    // unordered_set<struct Node*,int>mp;
    struct Node *p=head;
    int x;
    unordered_set<Node *>loop;
    while (p)
    {
        // x=(int)(void *)p;
        // printf("The address is : %d\n", p);

        if(loop.find(p) != loop.end()){
            return p;
            printf("\nLOOP DETECTED\n");
        }
        loop.insert(p);
        p=p->next;
    }
    
    return head;
}

struct Node *partition(struct Node *head, int n){
    vector<int>arr1;
    vector<int>arr2;

    struct Node *p=head;
    while (p!=NULL)
    {
        if(p->data<n)
            arr1.push_back(p->data);
        else
            arr2.push_back(p->data);

        p=p->next;
    }
    
    p=head;
    for (int i = 0; i < arr1.size(); i++)
    {
        p->data=arr1[i];
        p=p->next;
    }
     for (int i = 0; i < arr2.size(); i++)
    {
        p->data=arr2[i];
        p=p->next;
    }

    return head;
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *fifth;
    struct Node *sixth;

    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    fifth = (struct Node *)malloc(sizeof(struct Node));
    sixth = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second nodes
    head->data = 1;
    head->next = second;

    // Link second and third nodes
    second->data = 4;
    second->next = third;

    // Link third and fourth nodes
    third->data = 3;
    third->next = fourth;

    // Terminate the list at the third node
    fourth->data = 2;
    fourth->next = fifth;

    fifth->data = 5;
    fifth->next = sixth;

    sixth->data = 2;
    sixth->next = NULL;

    printf("Linked list before deletion\n");
    linkedListTraversal(head);

    // // head = deleteFirst(head); // For deleting first element of the linked list
    // // head = deleteAtIndex(head, 2);
    // head = deleteAtLast(head);
    // printf("Linked list after deletion\n");
    // linkedListTraversal(head);

    // head = rotate(head, 234);

    // head = reorder(head);

    // head = reorder(head);

    // head= swaplist(head);

    // head = deldup(head);

    // head=removeDuplicates2(head);

    // head = insertionSort(head, 3);

    // head=cycle(head);

    head=partition(head, 3);


    printf("\n*** After Head Rotation\n");
    linkedListTraversal(head);

    return 0;
}