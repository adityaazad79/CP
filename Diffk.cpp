#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

int fun1(vector<int> A, int B)
{
    int size = A.size();
    int i = 0, j =1;
    while (i < size && j<size)
    {
        if (A[j] - A[i] == B && i!=j)
            return 1;
        else if (A[j] - A[i] > B)
            i++;
        else
            j++;
    }
    return 0;
}
int fun2(vector<int> A, int B)
{
    int i = 0;
    int j = 0;
    int n = A.size();
    while (j < n)
    {
        int diff = A[j] - A[i];
        if (diff == B && i != j)
        {
            return true;
        }
        else if (diff > B)
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, B;
    cin >> n;
    int temp;
    vector<int> A;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        A.push_back(temp);
    }
    cin >> B;
    cout << fun1(A, B) << endl;

    return 0;
}