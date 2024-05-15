#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

int fun(vector<int> A)
{
    int size = A.size();
    int ct = 0;
    int e = A[0];
    for (int i = 0; i < size; i++)
    {
        unordered_map<int, int> ump;
        while (!ump[A[i]])
        {
            ump[A[i]]++;
            i++;
        }
        ct++;
    }
    return ct;
}

int fun2(vector<int> A)
{
    unordered_map<int,int>ump;
    int max=-1;
    for (int i = 0; i < A.size(); i++)
    {
        ump[A[i]]++;
        if(max<ump[A[i]])
            max=ump[A[i]];
    }
    return max;
}

int fun3(vector<int> A)
{
    map<int, int> m;
    for (auto i : A)
        m[i]++;
    vector<int> b;
    for (auto i : m)
        b.push_back(i.second);
    return *max_element(b.begin(), b.end());
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    int temp;
    vector<int> A;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        A.push_back(temp);
    }

    cout << fun2(A) << endl;

    return 0;
}

// bool solve(TreeNode *a, TreeNode *b)
// {

//     if (a == NULL || b == NULL)
//         return (a == b);

//     if (a->val != b->val)
//         return false;

//     return solve(a->left, b->right) && solve(a->right, b->left);
// }

// int Solution::isSymmetric(TreeNode *A)
// {

//     return solve(A->left, A->right);
// }