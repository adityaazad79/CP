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

    int h, w, si, sj;
    vector<string> S;
    cin >> h >> w >> si >> sj;
    si--, sj--;
    string temp;
    for (int i = 0; i < h; i++)
    {
        cin >> temp;
        S.push_back(temp);
    }
    string x;
    cin >> x;
    char t;
    int size = x.size();
    for (int i = 0; i < size; i++)
    {
        if (x[i] == 'L' && (sj != 0) && S[si][sj - 1] == '.')
        {
            sj--;
        }
        else if (x[i] == 'R' && sj != w - 1 && S[si][sj + 1] == '.')
        {
            sj++;
        }
        else if (x[i] == 'U' && si != 0 && S[si - 1][sj] == '.')
        {
            si--;
        }
        else if (x[i] == 'D' && si != h - 1 && S[si + 1][sj] == '.')
        {
            si++;
        }
    }
    cout << si + 1 << " " << sj + 1 << endl;

    return 0;
}