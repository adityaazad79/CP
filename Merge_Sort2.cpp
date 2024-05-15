#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

void merge(vector<int> &A, int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int l[n1];
    int r[n2];

    for (int i = 0; i < n1; i++)
        l[i] = A[left + i];
    for (int i = 0; i < n2; i++)
        r[i] = A[mid + 1 + i];

    int i = left, j = 0, k = 0;
    while (j < n1 && k < n2)
        if (l[j] < r[k])
            A[i++] = l[j++];
        else
            A[i++] = r[k++];
    while (j < n1)
        A[i++] = l[j++];
    while (k < n2)
        A[i++] = r[k++];
}

void merge_Sort(vector<int> &A, int begin, int end)
{
    if (begin >= end)
        return;

    int mid = (begin + end) / 2;
    merge_Sort(A, begin, mid);
    merge_Sort(A, mid + 1, end);
    merge(A, begin, mid, end);
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
    merge_Sort(A, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}