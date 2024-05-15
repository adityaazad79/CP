#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

vector<int>fun(vector<int>A){
    int size=A.size();
    int i,a=-1,b;
    for (i=1;i<size;i++)
        if(A[i-1]>A[i]){
            a=i-1;
            break;
        }
    if(a==-1)
        return {-1};
    bool flag=0;
    for (i=size-1;i>0;i--){
        if(A[i-1]>=A[i]){
            b=i;
            break;
        }
    }

    return {a,b};
}

vector<int> fun2(vector<int> &A)
{
    int n = A.size();
    vector<int> B;
    for (int i = 0; i < n; i++)
    {
        B.push_back(A[i]);
    }
    vector<int> C;
    sort(B.begin(), B.end());
    int cnt = 0;
    int firstElement = -1;
    for (int i = 0; i < n; i++)
    {
        if (A[i] != B[i])
        {
            if (firstElement == -1)
            {
                firstElement = i;
            }
            cnt = i;
        }
    }
    if (firstElement != -1)
    {
        C.push_back(firstElement);
        C.push_back(cnt);
    }
    else
        C.push_back(-1);
    return C;
}

vector<int>fun3(vector<int>A){
    int size=A.size();
    int i;
    int min=A[0],max=A[0],flag=0;
    for (i=1;i<size;i++){
        if(A[i-1]>A[i]){
            flag=1;
        }
        if(min>A[i])
            min=A[i];
        if(max<A[i])
            max=A[i];
    }

    if(!flag)
        return {-1};

    // cout<<"min : "<<min<<" max : "<<max<<endl;
    int a,b;
    for (i=0;i<size;i++){
        if(A[i]==max){
            b=i;
            break;
        }
    }
    
    for (i=size-1;i>=0;i--){
        if(A[i]==min){
            a=i;
            break;
        }
    }

    return {a,b};
}

vector<int>fun4(vector<int>A){
    int size=A.size();
    int i,flag=0;
    for (i=1;i<size;i++){
        if(A[i-1]>A[i]){
            flag=1;
        }
    }
    if(!flag)
        return {-1};
        
    vector<int>B=A;
    sort(B.begin(),B.end());

    int a,b;
    for (i=0;i<size;i++){
        if(A[i]!=B[i]){
            if(flag){
                a=i;
                flag=0;
            }
            b=i;
        }
    }

    return {a,b};
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
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        A.push_back(temp);
    }

    vector<int> X = fun2(A);
    for (int i = 0; i < X.size(); i++)
    {
        cout << X[i] << " ";
    }

    return 0;
}