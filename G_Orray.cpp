#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

void fun()
{
    int n;
    cin >> n;

    vector<int> V(n);
    int max = -1;
    int temp;
    int num = 0;
    int index = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> V[i];
        num = num | V[i];
        if (max < V[i])
        {
            max = V[i];
            index = i;
        }
    }

    if (max == num)
    {
        cout << max;
        bool flag = 1;
        for (int i = 0; i < n; i++)
        {
            if (V[i] == max && flag)
            {
                flag = 0;
                continue;
            }
            cout << " " << V[i];
        }
        cout << endl;
        return;
    }

    vector<int> elem;

    elem.push_back(V[index]);
    V[index] = -1;

    int t_xor = max;

    vector<int> mask(n);

    temp = -1;
    index = -1;

    while (t_xor < num)
    {
        temp = -1;
        for (int i = 0; i < n; i++)
        {
            if (V[i] == -1)
                continue;
            if (temp < ((t_xor ^ V[i]) & V[i]))
            {
                temp = (t_xor ^ V[i]) & V[i];
                index = i;
            }
        }
        elem.push_back(V[index]);
        V[index] = -1;
        t_xor = t_xor | temp;
    }

    for (auto it : elem)
    {
        cout << it << " ";
    }

    for (int i = 0; i < n; i++)
    {
        if (V[i] == -1)
            continue;
        cout << V[i] << " ";
    }

    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        fun();
    }

    return 0;
}