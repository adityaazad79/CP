#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        stack<int> st;
        int cost = 0;
        st.push(0);

        for (int i = 1; i < n; i++)
        {
            if (st.size() > 0)
            {
                if (s[i] == '_')
                {
                    cost = cost + (i - st.top());
                    st.pop();
                }
                else if (s[i] == '(')
                {
                    st.push(i);
                }
                else if (s[i] == ')')
                {
                    cost = cost + (i - st.top());
                    st.pop();
                }
            }
            else if (s[i] == '(' || s[i] == '_')
            {
                st.push(i);
            }
        }
        cout << cost << endl;
    }

    return 0;
}