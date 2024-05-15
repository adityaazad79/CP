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
    unordered_map<int, int> mp;
    for (int i = 0; i < size; i++)
        mp[A[i]]++;

    int ct = 0;
    for (auto e : mp)
    {
        cout << e.first << " ";
        cout << e.second << " ";
        cout << endl;
        if (e.second == 1)
            ct++;
        else if (e.second > 1)
        {
            ct++;
            ct++;
        }
    }
    cout << endl;
    cout << endl;

    return ct;
}

int fun2(vector<int> A)
{
    int size = A.size();
    int e = A[0], flag = 0, ind, ind2;
    for (int i = 1; i < size - 1; i++)
    {
        if (!flag && e == A[i])
        {
            flag = 1;
        }
        else if (flag && e == A[i])
        {
            flag = 0;
            ind = i + 1;
            ind2 = i;
            while (A[ind2] == A[ind])
            {
                A[ind++] = -1;
            }
            i = ind;
        }
    }
    for (auto i : A)
    {
        cout << i << " ";
    }

    cout << endl;
    cout << endl;

    return A.size();
}

int fun3(vector<int> A)
{
    int size=A.size();
    if (size<=2)
        return size;
    int l=0,h=1;
    while(h<size)
    {
        if(A[l]!=A[h])
        {
            A[++l]=A[h];
            h++;
            continue;
        }
        while(A[l]==A[h]&&h<size)
            h++;
        if(h==size)
        {
            A[l+1]=A[l];
            return l+2;
        }
        else
        {
            A[l+1]=A[l];
            A[l+2]=A[h];
            l=l+2;
            h++;
        }
    }
    return (l+1);
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

    cout << fun3(A) << endl;

    return 0;
}