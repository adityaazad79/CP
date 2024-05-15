#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

int fun(string A)
{
    int size = A.size();
    int size2 = size / 2;
    bool flag = 0;
    size--;
    int s, e;
    for (int i = 0; i < size2; i++)
    {
        if (A[i] == A[size--])
            continue;
        // if(flag)
        // return 0;
        // flag=1;
        s = i;
        e = size + 1;
        break;
    }
    size = A.size() - 1;
    for (int j = 0; j < size2; j++)
    {
        if (j == s)
        {
            continue;
        }
        if (A[j] == A[size--])
            continue;
        // return 0;
        flag = 1;
        break;
    }
    size = A.size() - 1;
    if (flag)
    {
        for (int j = 0; j < size2; j++)
        {
            if (size == e)
            {
                size--;
                continue;
            }
            if (A[j] == A[size--])
                continue;
            return 0;
        }
    }
    return 1;
}

int fun2(string A)
{
    int size = A.length();
    int flag = 0;
    int size2 = size - 1;
    for (int i = 0; i <= size2;)
    {
        if (A[i] == A[size2])
        {
            i++;
            size2--;
            continue;
        }
        if (A[i] == A[size2 - 1])
        {
            size2--;
            flag++;
        }
        else if (A[i + 1] == A[size2])
        {
            i++;
            flag++;
        }
        else
            return 0;
    }
    if (flag > 1)
        return 0;
    return 1;
}

int fun3(string s)
{
    int n = s.length();
    int i = 0;
    int j = n - 1;
    int count = 0;
    while (i <= j & i < n & j < n)
    {
        if (s[i] == s[j]) // for equal condition
        {

            i++;
            j--;
        }
        else // for not equal condition
        {
            if (s[i + 1] == s[j])
            {
                i++;
                count++;
            }
            else if (s[i] == s[j - 1])
            {
                j--;
                count++;
            }
            else
            {
                return 0;
            }
        }
    }
    if (count > 1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

bool check(string s, int i, int j)
{
    while (i <= j)
    {
        if (s[i] != s[j])
            return false;
        i++;
        j--;
    }
    return true;
}

int fun4(string s)
{
    int i = 0, j = s.length() - 1;

    if (check(s, i, j))
        return 1;

    while (i <= j)
    {
        if (s[i] == s[j])
        {
            i++;
            j--;
        }
        else if (check(s, i + 1, j) || check(s, i, j - 1))
            return 1;
        else
            return 0;
    }
    return 0;
}

int fun5(string A)
{
    int n = A.length();
    int lo = 0, hi = n - 1;
    int flag = 0;
    while (lo < hi)
    {
        if (A[lo] != A[hi])
        {
            // if (flag)
            // return 0;
            flag++;
            if (A[hi - 1] == A[lo])
                hi--;
            else if (A[lo + 1] == A[hi])
                lo++;
            else
                return 0;
        }
        else
        {
            lo++;
            hi--;
        }
    }
    if (flag > 1)
        return 0;
    return 1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin >> s;
    cout << fun4(s) << endl;

    return 0;
}