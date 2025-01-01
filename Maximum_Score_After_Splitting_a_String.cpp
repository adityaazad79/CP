#include <bits/stdc++.h>

using namespace std;

const int N = 1e7 + 10;
const int M = 1e9 + 7;

// Method 1

// int maxScore(string s)
// {
//     int n = s.size();
//     int ans = 0;

//     vector<int> zero(n);
//     vector<int> one(n);

//     int k = 0;
//     for (int i = 0; i < n - 1; i++)
//     {
//         if (s[i] == '0')
//         {
//             k++;
//         }
//         zero[i] = k;
//     }
//     zero[n - 1] = zero[n - 2];

//     k = 0;
//     for (int i = n - 1; i > 0; i--)
//     {
//         if (s[i] == '1')
//         {
//             k++;
//         }
//         one[i] = k;
//     }
//     one[0] = one[1];

//     for (int i = 0; i < n; i++)
//     {
//         ans = max(ans, one[i] + zero[i]);
//     }

//     return ans;
// }

int maxScore(string s)
{
    int n = s.size();

    int zero = 0;
    int one = 0;
    int ans = INT_MIN;

    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == '1')
            one++;
        else
            zero++;

        ans = max(ans, zero - one);
    }

    if (s[s.size() - 1] == '1')
        one++;

    return ans + one;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin >> s;

    cout << maxScore(s) << endl;

    return 0;
}