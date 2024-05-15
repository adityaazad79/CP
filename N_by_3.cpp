#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

// NlogN
int fun1(vector<int> A)
{
    int size = A.size();
    sort(A.begin(), A.end());
    int ct = 1, rq = ceil(size / 3.0);
    for (int i = 1; i < size; i++)
    {
        if (A[i - 1] == A[i])
        {
            ct++;
            if (ct == rq)
                return A[i];
        }
        else
            ct = 1;
    }
    return -1;
}

// N
int fun2(vector<int> A)
{
    int count1=0,count2=0,e1=INT_MAX,e2=INT_MAX;
    int size =A.size();
    for (int i=0;i<size;i++)
        if(A[i]==e1)
            count1++;
        else if(A[i]==e2)
            count2++;
        else if(count1==0)
        {
            count1++;
            e1=A[i];
        }
        else if(count2==0)
        {
            count2++;
            e2 = A[i];
        }
        else
        {
            count1--;
            count2--;
        }
    count1=count2=0;
    for (int i=0;i<size;i++)
        if (A[i] == e1)
            count1++;
        else if(A[i]==e2)
            count2++;

    if (count1>size/3)
        return e1;
    if (count2>size/3)
        return e2;

    return -1;
}

int fun3(vector<int>A){
    int N = A.size();
    srand(time(NULL));
    for(int i = 0; i < 25; i++) {
        int x = rand()%N, count = 0;
        for(int i = 0; i < N; i++)
            if(A[i] == A[x])
                count++;
        if(count > N/3)
            return A[x];
    }
    return -1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector<int> A;
    int temp;
    while (n--)
    {
        cin >> temp;
        A.push_back(temp);
    }

    int rep = fun3(A);

    cout << "Repeated Num : " << rep << endl;

    return 0;
}