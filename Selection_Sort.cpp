#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

void pArray(vector<int> A)
{
    int size = A.size();
    for (int i = 0; i < size; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}

vector<int> s_sort(vector<int> A)
{
    int size = A.size();
    int index;
    for (int i = 0; i < size; i++)
    {
        index = i;
        for (int j = i + 1; j < size; j++)
            if (A[j] < A[index])
                index = j;
        swap(A[i], A[index]);
    }
    return A;
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

    // pArray(A);
    A = s_sort(A);
    // cout<<endl;
    pArray(A);

    return 0;
}