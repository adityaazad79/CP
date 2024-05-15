#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

vector<int> maxSubArray(const vector<int> &A)
{
    ll MAX = INT_MIN, max = 0;
    int size = A.size();
    vector<int> sol,solf;
    int flag = 0;
    for (int i = 0; i < size; i++)
    {
        if (A[i] < 0)
        {
            sol.clear();
            max = 0;
            flag = 1;
            continue;
        }
        max += A[i];
        sol.push_back(A[i]);
        if (A[i] > max)
            max = A[i];
        if (MAX < max)
        {
            flag = 0;
            while (A[i + 1] == 0 && i < size - 1)
                sol.push_back(A[i++]);
            MAX = max;
            solf=sol;
        }
    }
    return solf;
}

vector<int> maxSubArray2(const vector<int> &A)
{
    int size=A.size();
    long int max_sum = -1, sum = 0;
    vector<int> max_ans, ans;

    // for (auto val : A)
    for(int i=0;i<size;i++)
    {
        if (A[i] < 0)
        {
            if (sum > max_sum)
            {
                max_sum = sum;
                max_ans = ans;
            }
            sum = 0;
            ans.clear();
            continue;
        }
        sum += A[i];
        ans.push_back(A[i]);
    }

    if (sum > max_sum)
    {
        max_sum = sum;
        max_ans = ans;
    } // right boundary case

    return max_ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    int temp;
    vector<int> V;
    while (n--)
    {
        cin >> temp;
        V.push_back(temp);
    }

    V = maxSubArray(V);

    for (auto i : V)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}