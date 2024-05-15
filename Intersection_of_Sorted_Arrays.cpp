#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

vector<int> fun(const vector<int> &A,const vector<int> &B)
{
    vector<int> ans;
    int p=0,q=0;
    int s_a=A.size();
    int s_b=B.size();

    while (p<s_a && q<s_b)
    {
        if(A[p]==B[q])
        {
            ans.push_back(A[p]);
            p++;
            q++;
        }
        else if(A[p]<B[q])
            p++;
        else if(A[p]>B[q])
            q++;
    }
    return ans;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> A;
    vector<int> B;
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        A.push_back(temp);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> temp;
        B.push_back(temp);
    }

    vector<int> C = fun(A, B);
    for (int i = 0; i < C.size(); i++)
    {
        cout << C[i] << " ";
    }
    cout << endl;

    return 0;
}