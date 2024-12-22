#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

void calculate(int &w, vector<vector<float>> &V, int &m_sum, int &sum, float curr_cap, int b_elem, int curr_elem)
{
    if (m_sum < sum)
    {
        // cout << m_sum << endl;
        m_sum = sum;
    }

    if (curr_elem == V.size())
        return;

    // if (w < 0)
    // {
    //     cout << "w < 0" << endl;
    //     sum = sum - V[b_elem][1];
    //     // sum = sum - V[curr_elem][1];
    //     w = w + V[b_elem][0];
    //     // b_elem++;
    //     // curr_elem--;
    //     calculate(w, V, m_sum, sum, curr_cap, b_elem + 1, curr_elem + 1);
    // }

    // if (w >= 0 || curr_elem == V.size())

    if ((w - V[curr_elem][0]) >= 0)
    {
        sum = sum + V[curr_elem][1];
        w = w - V[curr_elem][0];
        calculate(w, V, m_sum, sum, curr_cap, b_elem, curr_elem + 1);
    }
    else
    {
        sum = sum - V[b_elem][1];
        // sum = sum - V[curr_elem][1];
        w = w + V[b_elem][0];
        // b_elem++;
        // curr_elem--;
        calculate(w, V, m_sum, sum, curr_cap, b_elem + 1, curr_elem);
    }
    // curr_elem++;
}

int fun(int w, vector<vector<float>> &V)
{
    int size = V.size();
    int sum = 0;
    int m_sum = 0;
    float curr_cap = 0;
    calculate(w, V, m_sum, sum, curr_cap, 0, 0);

    return m_sum;
}

void calculate2(int w, vector<vector<float>> &V, int &m_sum, int sum, int elem)
{
    if (w < 0)
        return;
        
    if (m_sum < sum)
        m_sum = sum;

    if (w <= 0 || elem == V.size())
        return;

    calculate2(w - V[elem][0], V, m_sum, sum + V[elem][1], elem + 1);

    calculate2(w, V, m_sum, sum, elem + 1);
}

int fun2(int w, vector<vector<float>> &V)
{
    int size = V.size();
    int sum = 0;
    int m_sum = 0;
    calculate2(w, V, m_sum, sum, 0);

    return m_sum;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, w;
    cin >> n >> w;

    // vector<vector<int>>WV(vector<int>(n))(3);
    vector<vector<float>> V(n, vector<float>(3));

    for (int i = 0; i < n; i++)
    {
        cin >> V[i][0];
        cin >> V[i][1];
        V[i][2] = V[i][1] / V[i][0];
        // cin>>V[i];
    }
    sort(V.begin(), V.end(), [](vector<float> &a, vector<float> &b)
         { return b[2] < a[2]; });

    // cout << fun(w, V) << endl;
    cout << fun2(w, V) << endl;

    // for (int i = 0; i < n; i++)
    // {
    //     cout << V[i][0] << " " << V[i][1] << " " << V[i][2] << endl;
    // }

    return 0;
}