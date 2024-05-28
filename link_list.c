#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

struct Node *addNodeAtHead(struct Node *head, int data){
    struct Node *newNode=(struct Node *)malloc(sizeof(struct Node));
    newNode->data=data;
    newNode->next=head;
    return newNode;
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
    p = head;
    struct Node *q = head;
    struct Node *r = head;
    struct Node *s = head;
    struct Node *t = head;
    for (int i = 0; i < size; i++)
    {
        // if (i%2==0)
        if (i == 0 || i == 2)
        {
            r = head;
            for (int j = 0; j < size - i - 2; j++)
            {
                r = r->next;
                q = r->next;
                printf("\n**%d ", q->data);
            }
            // break;
            s = p->next;
            p->next = q;
            q->next = s;
            r->next = NULL;
            break;
        }
        t = t->next;
        p = t;
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

    p = head;
    struct Node *q = head;
    struct Node *r = head;
    struct Node *t = head;
    for (int i = 0; i < size - 2; i++)
    {
        if (i % 2 == 0)
        {
            r = t;
            while (q->next != NULL)
            {
                r = r->next;
                q = r->next;
                printf("\n**%d ", q->data);
            }
            q->next = p->next;
            p->next = r->next;
            r->next = NULL;
        }
        t = t->next;
        p = t;
    }

    return head;
}

struct Node *reorder(struct Node *head)
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
    int arr[size];

    p = head;
    for (int i = 0; i < size; i++)
    {
        arr[i] = p->data;
        p = p->next;
    }

    for (int i = 0; i < size; i++)
    {
        printf("** E: %d", arr[i]);
    }
    p = head;
    for (int i = 0, j = 1; i < size; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", arr[j - 1]);
            p->data = arr[j - 1];
        }
        else
        {
            printf("%d ", arr[size - j]);
            p->data = arr[size - j];
            j++;
        }
        p = p->next;
    }
    printf("\n\nExp\n");

    return head;
}

struct Node *swaplist(struct Node *head)
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
    int arr[size];

    p = head;
    for (int i = 0; i < size; i++)
    {
        arr[i] = p->data;
        p = p->next;
    }

    for (int i = 0; i < size; i++)
    {
        printf("** E: %d", arr[i]);
    }

    p = head;
    for (int i = 1; i < size; i += 2)
    {
        p->data = arr[i];
        p = p->next;
        p->data = arr[i - 1];
        p = p->next;
    }

    return head;
}

struct Node *removeNthNodeFromEnd(struct Node *head, int B)
{
    if (B == 0)
        return head;
    else if (head->next == NULL)
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

    if (B > size)
        B = size;

    int arr[size];
    p = head;
    int skip = size - B, flag = 0, i = 0;
    for (i = 0; i < size; i++)
    {
        if (i == skip)
        {
            flag = 1;
            p = p->next;
            continue;
        }
        if (flag)
            arr[i - 1] = p->data;
        else
            arr[i] = p->data;
        p = p->next;
    }

    p = head;
    for (i = 0; i < size - 2; i++)
    {
        p->data = arr[i];
        p = p->next;
    }
    p->data = arr[i];
    p->next = NULL;

    return head;
}

// struct Node *removeNthNodeFromEnd(struct Node *head, int B){
//     struct Node *p=head;
//     while(B-- && p->next)
//         p=p->next;

//     struct Node *q=head;

//     return head;
// }

struct Node *insertionSort(struct Node *head, int n)
{
    // INCOMPLETE
    struct Node *p = head->next;
    struct Node *q = head;
    struct Node *temp;

    return head;
}

struct Node *reverseList(struct Node *head)
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
    int arr[size];

    p = head;
    for (int i = 0; i < size; i++)
    {
        arr[i] = p->data;
        p = p->next;
    }

    p = head;
    p->data = arr[size - 1];
    for (int i = size - 2; i >= 0; i--)
    {
        p = p->next;
        p->data = arr[i];
    }
    return head;
}

struct Node *partition(struct Node *head, int n)
{
    // Completed in cpp

    return head;
}

struct Node *getIntersectionNode(struct Node *A, struct Node *B)
{
    struct Node *p = A;
    struct Node *q = B;

    int size1 = 0;
    while (p != NULL)
    {
        size1++;
        p = p->next;
    }

    int size2 = 0;
    while (q != NULL)
    {
        size2++;
        q = q->next;
    }

    p = A;
    q = B;
    int diff = abs(size1 - size2);
    int diff2 = size1 - diff;
    if (size1 > size2)
    {
        // flag=1;
        while (diff--)
            p = p->next;
    }
    else
        while (diff--)
            q = q->next;

    while (diff2--)
    {
        if (p = q)
        {
            return p;
        }
        p = p->next;
        q = q->next;
    }

    return NULL;
}

struct Node *reverseBetween(struct Node *head, int a, int b)
{
    if (!head->next || !head)
        return head;
    // else if(!head->next)
    //     return head;
    int rev = b - a + 1;
    int arr[rev];
    struct Node *p = head;
    struct Node *q = head;

    a--;
    ;
    while (a--)
    {
        p = p->next;
    }
    // p=p->next;
    q = p;
    // a--;
    // while(a--){
    //     q=q->next;
    // }
    // r=p;
    // while(rev--){
    //     p->next=q;
    // }

    for (int i = 0; i < rev; i++)
    {
        arr[i] = p->data;
        p = p->next;
    }

    for (int i = 0; i < rev; i++)
    {
        printf("** %d ", arr[i]);
    }

    for (int i = rev - 1; i >= 0; i--)
    {
        // arr[i]=p->data;
        // p=p->next;
        q->data = arr[i];
        q = q->next;
    }

    return head;
}

struct Node *subtract(struct Node *head)
{
    struct Node *p = head;

    int size = 0;
    while (p != NULL)
    {
        size++;
        p = p->next;
    }
    int arr[size];

    p = head;
    int i = 0;
    for (i = 0; i < size; i++)
    {
        arr[i] = p->data;
        p = p->next;
    }

    // for ( i = 0; i < size; i++)
    // {
    //     printf("**%d ", arr[i]);
    // }

    int s2 = size / 2;
    for (i = 0; i < s2; i++)
    {
        arr[i] = arr[size - i - 1] - arr[i];
    }

    p = head;
    for (i = 0; i < s2; i++)
    {
        // printf("**%d ", arr[i]);
        p->data = arr[i];
        p = p->next;
    }

    return head;
}

int palindrome(struct Node *head)
{
    if (head->next == NULL || head == NULL)
        return 1;
    struct Node *p = head;

    int size = 0;
    while (p != NULL)
    {
        size++;
        p = p->next;
    }
    int arr[size];

    p = head;
    int i = 0;
    for (i = 0; i < size; i++)
    {
        arr[i] = p->data;
        p = p->next;
    }

    int s2 = size / 2;
    int flag = 0;
    for (i = 0; i < s2; i++)
    {
        // arr[i]=arr[size-i-1] - arr[i];
        if (arr[i] != arr[size - i - 1])
        {
            flag = 1;
            break;
        }
    }
    if (flag)
    {
        printf("NOT A PALINDROME\n");
        return 0;
    }
    else
    {
        printf("A PALINDROME\n");
        return 1;
    }
}

struct Node *addTwoNumbers1(struct Node *A, struct Node *B)
{
    int size1 = 0, size2 = 0;
    struct Node *p = A;
    struct Node *q = B;
    // while (p->next!=NULL)
    while (p)
    {
        size1++;
        p = p->next;
    }
    // while (q->next!=NULL)
    while (q)
    {
        size2++;
        q = q->next;
    }
    struct Node *new = (struct Node *)malloc(sizeof(struct Node));
    // struct Node *new;
    // q->next=new;
    // p->next=new;
    // new->next=NULL;
    // size1++;
    // size2++;

    int arr1[size1], arr2[size2];
    p = A;
    q = B;
    int i;
    int mul = 1;
    for (i = size1 - 1; i >= 0; i--)
    {
        arr1[i] = (p->data) * mul;
        mul *= 10;
        p = p->next;
    }
    mul = 1;
    for (i = size2 - 1; i >= 0; i--)
    {
        arr2[i] = (q->data) * mul;
        mul *= 10;
        q = q->next;
    }

    int sum1 = 0, sum2 = 0;
    for (i = 0; i < size1; i++)
    {
        sum1 += arr1[i];
        // printf("%d ",arr1[i]);
    }
    // printf("\n");
    for (i = 0; i < size2; i++)
    {
        sum2 += arr2[i];
        // printf("%d ",arr2[i]);
    }

    int sum = sum1 + sum2;
    // printf("\nSum : %d", sum);

    int sumsize = 0;
    int stemp = sum;
    while (stemp)
    {
        sumsize++;
        stemp /= 10;
    }

    if (size1 >= size2)
    {
        p = A;
        // if (sumsize == size1)
        {
            // for ( i = 0; i < sumsize; i++)
            for (i = 0; i < size1-1; i++)
            {
                // printf("\nsum : ", sum);
                p->data = sum % 10;
                sum /= 10;
                // printf("\t p->data : %d", p->data);
                p = p->next;
            }
        }
        p->data=sum%10;
        sum/=10;
        if (sumsize > size1)
        {
            // struct Node *new = (struct Node *)malloc(sizeof(struct Node));
            // p=new;
            // new->data=sum%10;
            // new->next=NULL;
            // p->data=sum%10;
            p->next=new;
            p=p->next;
            p->data = sum % 10;
            printf("sdfsd");
            // p=p->next;
        }
        else
        {
            // p=strcpy(p, NULL);
            p->next = NULL;
        }
        // printf("\nPriting A\n");
        return A;
    }
    else
    {
        q = B;
        for (i = 0; i < size2-1; i++)
        {
            // printf("\nsum : ", sum);
            q->data = sum % 10;
            sum /= 10;
            // printf("\t q->data : %d", q->data);
            q = q->next;
        }
         q->data=sum%10;
        sum/=10;
        if (sumsize > size2)
        {
            // printf("\nsum : ", sum);
            // printf("\t q->data : %d", q->data);
            // struct Node *new = (struct Node *)malloc(sizeof(struct Node));
            // q=new;
            // new->data=sum%10;
            // new->next=NULL;
            q->next=new;
            q=q->next;
            q->data = sum % 10;
            printf("sdfsd");
            // q->data = sum;
            // q=q->next;
        }
        else
            q->next = NULL;
        // printf("\nPriting B\n");
        return B;
    }

    // struct Node **res, *head;
    // head = (struct Node *)malloc(sizeof(struct Node));
    // res = (struct Node **)malloc(sumsize * sizeof(struct Node));
    // int j=0;
    // head->data=sum%10;
    // head->next=res[0];
    // sum /= 10;
    // // for ( i = 1; i<sumsize; i++)
    // {
    //     res[0]->data=213;
    // //     res[i]->data=sum%10;
    // //     sum/=10;
    // //     res[i]->next=res[i+1];
    // }
    // printf("\nSumsize : %d", sumsize);
    // while()

    // return A;
}

struct Node *reverseKList(struct Node *head, int k){
    int size=0;
    struct Node *p=head;
    while(p){
        size++;
        p=p->next;
    }
    printf("Size : %d\n", size);

    int arr[size];
    p=head;
    int i=0;
    for ( i = 0; i < size; i++)
    {
        arr[i]=p->data;
        p=p->next;
    }

    for ( i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    // int count, temp,sizerem=size;
    // for ( i = 0; i < size; i+=k)
    // {
    //     // printf("\n");
    //     count=k;
    //     // while()
    //     if(!(sizerem%2))
    //     for(int j=i;j<i+count/2;j++)
    //     {
    //         temp=arr[j];
    //         arr[j]=arr[count+j-1];
    //         arr[count+j-1]=temp;
    //         // printf("j : %d, count : %d\n**",j,count);
    //         // i++;
    //         // temp--;
    //     }
    //     sizerem-=k;
    //     // printf("Sizerem : %d, i : %d\n",sizerem,i);
    // }


    printf("\n");
    int j;
    int sizerem=size;
    for (i = 0; i < size; i+=k)
    {
        int ct=1;
        if(sizerem/k)
            for (j = i; j < i+k/2; j++)
            {
                int temp=arr[j];
                arr[j]=arr[i+k-ct];
                arr[i+k-ct]=temp;
                ct++;
            }
        sizerem-=k;
    }

    printf("\n");
    for ( i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    p=head;
    for ( i = 0; i < size; i++)
    {
        p->data=arr[i];
        p=p->next;
    }
    return head;
}

struct Node *addTwoNumbers2(struct Node *A, struct Node *B){
    int size1 = 0, size2 = 0;
    struct Node *p = A;
    struct Node *q = B;
    // while (p->next!=NULL)
    while (p)
    {
        size1++;
        p = p->next;
    }
    // while (q->next!=NULL)
    while (q)
    {
        size2++;
        q = q->next;
    }

    // printf("Sie1 : %d, Size2 : %d\n",size1, size2);
    int min = (size1>size2)?size2:size1;


    printf("MIN : %d\n", min);

    int carry=0;
    p=A;
    q=B;
    int add;
    struct Node *res=size1>size2?p:q;
    struct Node *reshead=res;
    struct Node *extra=(struct Node *)malloc(sizeof(struct Node));
    while(min--){
        // printf("fsdads");
        add=p->data+q->data;
        if (carry)
            add+=1;
        
        carry=0;
        printf("Add : %d\n", add);
        
        if(add>10){
            carry=1;
            add=add%10;
        }
        res->data=add;
        
        if (p->next == NULL && q->next==NULL && carry ==1)
        {
            printf("continue **\n");
            // continue;
            break;
        }
        
        res=res->next;
        p=p->next;
        q=q->next;
    }
    if (carry)
    {
        extra->data=1;
        extra->next=NULL;
        res->next=extra;
        // break;
    }
    // res->next=NULL;

    // while (reshead)
    // {
    //     printf("reshead_Data : %d\n",reshead->data);
    //     reshead=reshead->next;
    // }

    printf("Res : %d\n", res->data);
    
    printf("Carry : %d\n", carry);



    printf("Data Res : %d\n", res->data);
    
    // while(p){
    //     res->data=p->data;
    //     res=res->next;
    //     p=p->next;
    // }

    return reshead;
}

struct Node *addTwoNumbers3(struct Node *A, struct Node *B){
    int size1 = 0, size2 = 0;
    struct Node *p = A;
    struct Node *q = B;
    while (p)
    {
        size1++;
        p = p->next;
    }
    while (q)
    {
        size2++;
        q = q->next;
    }
    p=A;
    q=B;

    struct Node *res=(struct Node *)malloc(sizeof(struct Node));
    struct Node *ret=(struct Node *)malloc(sizeof(struct Node));
    struct Node *min=(struct Node *)malloc(sizeof(struct Node));
    res=size1>size2?p:q;
    min=size1<size2?p:q;
    ret=res;
    int carry=0;
    int sum=0;
    while (min)
    {
        sum=p->data+q->data;
        if (carry)
            sum+=1;
        
        carry=0;

        if (sum>9)
        {
            sum=sum%10;
            carry=1;
        }
        res->data=sum;
        printf("Sum : %d\n", sum);

        res=res->next;
        p=p->next;
        q=q->next;
        min=min->next;
    }

    struct Node *newNode=(struct Node *)malloc(sizeof(struct Node));

    while(res){
        sum=res->data;
        if (carry)
            sum+=1;
        
        carry=0;

        if (sum>9)
        {
            sum=sum%10;
            carry=1;
        }
        res->data=sum;
        res=res->next;
    }

    if(carry){
        res=ret;
        while(res->next){
            res=res->next;
        }
        newNode->data=1;
        newNode->next=NULL;
        res->next=newNode;
    }

    return ret;
}



struct Node *reverseAlternteKNodes(struct Node *head, int k){
    int size=0;
    struct Node *p=head;
    while(p){
        size++;
        p=p->next;
    }
    printf("Size : %d\n", size);

    int arr[size];
    p=head;
    int i=0;
    for ( i = 0; i < size; i++)
    {
        arr[i]=p->data;
        p=p->next;
    }

    for ( i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
    int j;
    int sizerem=size;
    for (i = 0; i < size; i=i+k+k)
    {
        int ct=1;
        if(sizerem/k)
            for (j = i; j < i+k/2; j++)
            {
                int temp=arr[j];
                arr[j]=arr[i+k-ct];
                arr[i+k-ct]=temp;
                ct++;
            }
        sizerem-=k;
    }

    printf("\n");
    for ( i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    p=head;
    for ( i = 0; i < size; i++)
    {
        p->data=arr[i];
        p=p->next;
    }
    return head;
}

int kthNodeFromMiddle(struct Node *head, int B){
    // int val=-1;
    struct Node *p=head;
    int size=0;
    while(p){
        size++;
        p=p->next;
    }
    printf("Size 1 : %d\n", size);

    size = size/2;
    if (B>size)
    {
        return -1;
    }
    printf("Size 2 : %d\n", size);
    
    size=size-B;
    p=head;

    printf("Size 3 : %d\n", size);
    while(size--)
        p=p->next;

    return p->data;
}

struct Node * evenReverse(struct Node *head){
    if (!head || !head->next )
        return head;
    
    struct Node *p=head;
    int size=0;
    while(p){
        size++;
        p=p->next;
    }

    int arr[size];
    p=head;
    int i;
    for ( i = 0; i <size; i++)
    {
        arr[i]=p->data;
        p=p->next;
    }

    p=head->next;
    if (size%2)
    {
        size--;
    }
    for ( i = 1; i < size; i++)
    {
        if (i%2)
            p->data=arr[size-i];
        p=p->next;
    }

    return head;
}

struct Node *replaceWithFactors(struct Node *head, int B){
    if (!head)
    {
        return head;
    }
    
    struct Node *ptr=head;
    while (ptr)
    {
        if (!(ptr->data%B))
        {
            ptr=ptr->next;
            continue;
        }
        else if ((ptr->data%B))
        {
            ptr->data-=ptr->data%B;
            ptr=ptr->next;
        }
        
    }
    return head;
}

struct Node *binaryDataSort(struct Node *head){
    struct Node *p=head;
    int c0=0,c1=0;
    while(p){
        if (p->data==0)
            c0++;
        else
            c1++;
        p=p->next;
    }

    p=head;
    while(c0--){
        p->data=0;
        p=p->next;
    }
    while(c1--){
        p->data=1;
        p=p->next;
    }

    return head;
}

void deleteTheNode(struct Node *node){
    struct Node *temp=node;
    int size=0;
    while(temp){
        temp=temp->next;
        size++;
    }

    size-=2;
    while(size--){
        node->data=node->next->data;
        node=node->next;
    }
    node->data=node->next->data;
    node->next=NULL;
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
    second->data = 2;
    second->next = third;
    // second->next = NULL;

    // Link third and fourth nodes
    third->data = 3;
    third->next = fourth;
    // third->next = NULL;

    // Terminate the list at the third node
    fourth->data = 4;
    // fourth->next =NULL;
    fourth->next =fifth;

    fifth->data = 5;
    fifth->next = sixth;

    sixth->data = 6;
    sixth->next = NULL;

    printf("Before Operation\n");
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

    // head=reverseList(head);

    // head=partition(head, 3);

    // head=getIntersectionNode(head,third);

    // head=reverseBetween(head, 2,4);

    // head = subtract(head);

    // int pal = palindrome(head);

    // head=addTwoNumbers(head, fifth);

    // head=reverseKList(head, 3);
    // head=addTwoNumbers2(head, fifth);

    // head=addTwoNumbers3(head, third);

    // head=addNodeAtEnd(head);

    // head=reverseAlternteKNodes(head,2);

    // head=addNodeAtHead(head,3);
    // head=addNodeAtHead(head,4);
    // head=addNodeAtHead(head,7);
    // printf("** %d **\n", kthNodeFromMiddle(head, 3));
    // head=evenReverse(head);

    // head=replaceWithFactors(head, 3);

    // head=binaryDataSort(head);

    deleteTheNode(third);


    printf("\nAfter Operation\n");
    linkedListTraversal(head);

    return 0;
}