#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

void generate(vector<int> &A, int size, vector<int> &temp, vector<vector<int>> &ans)
{
    if (size == 0)
    {
        ans.push_back(temp);
        return;
    }
    temp.push_back(A[A.size() - size]);
    generate(A, size - 1, temp, ans);
    temp.pop_back();

    generate(A, size - 1, temp, ans);
}

vector<vector<int>> subset(vector<int> &A)
{
    int size = A.size();
    vector<vector<int>> ans;
    vector<int> temp;
    sort(A.begin(),A.end());
    generate(A, size, temp, ans);

    sort(ans.begin(),ans.end());

    return ans;
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

    vector<vector<int>> ans = subset(A);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << "[ ";
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j];
            if (j != ans[i].size() - 1)
                cout << ", ";
        }
        cout << " ]";
        if (i != ans.size() - 1)
            cout << endl;
    }

    return 0;
}