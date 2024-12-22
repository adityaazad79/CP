// #include <bits/stdc++.h>
// using namespace std;

// typedef unsigned long long ull;
// typedef long long ll;
// typedef long double ld;
// #define endl '\n'
// const int N = 1e7 + 10;
// const int M = 1e9 + 7;
// struct Node
// {
//     int data;
//     struct Node *next;
// };

// void linkedListTraversal(struct Node *ptr)
// {
//     printf("Element: ");
//     while (ptr != NULL)
//     {
//         printf("%d ", ptr->data);
//         // printf("Element: %d ", ptr->data);
//         ptr = ptr->next;
//     }
//     printf("\n");
// }

// struct Node *Insertion_Sort(struct Node *head){
//     int size=0;
//     struct Node *temp=head,*t2,*t3;
//     while(temp!=NULL){
//         size++;
//         temp=temp->next;
//     }

//     temp=head;
//     t2=head;
//     t3=head;
//     int j,r;
//     for (int i = 1; i < size; i++)
//     {
//         temp=temp->next;
//         j=i-1;  
//         t2=head;
//         r=j;
//         while(r--){
//             t2=t2->next;
//         }
//         while(j>=0 && t2->data>temp->data){
//             r=j;
//             t2=t3;
//             while(r--){
//                 t2=t2->next;
//             }
//             t2->next->data=t2->data;
//             j--;
//         }
//         t2->next->data=temp->data;
//     }

//     return head;
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     struct Node *head;
//     struct Node *second;
//     struct Node *third;
//     struct Node *fourth;
//     struct Node *fifth;
//     struct Node *sixth;

//     // Allocate memory for nodes in the linked list in Heap
//     head = (struct Node *)malloc(sizeof(struct Node));
//     second = (struct Node *)malloc(sizeof(struct Node));
//     third = (struct Node *)malloc(sizeof(struct Node));
//     fourth = (struct Node *)malloc(sizeof(struct Node));
//     fifth = (struct Node *)malloc(sizeof(struct Node));
//     sixth = (struct Node *)malloc(sizeof(struct Node));

//     // Link first and second nodes
//     head->data = 23;
//     head->next = second;

//     // Link second and third nodes
//     second->data = 7;
//     second->next = third;
//     // second->next = NULL;

//     // Link third and fourth nodes
//     third->data = 3;
//     third->next = fourth;
//     // third->next = NULL;

//     // Terminate the list at the third node
//     fourth->data = 56;
//     // fourth->next =NULL;
//     fourth->next =fifth;

//     fifth->data = 31;
//     fifth->next = sixth;

//     sixth->data = 9;
//     sixth->next = NULL;

//     printf("Before Operation\n");
//     linkedListTraversal(head);

//     head=Insertion_Sort(head);

//     printf("After Operation\n");
//     linkedListTraversal(head);



//     return 0;
// }