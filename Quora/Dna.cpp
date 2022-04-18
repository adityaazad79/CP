#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, bound = 0, k = 0, M = -220;
    cin >> t;
    string s, s1, temp = "";
    cin >> s;
    for (int i = 0; i < t - 1; i++)
    {
        temp = s[i] + temp;
        bound = 0;
        int run = t - i - 1;
        int l = temp.size();
        run = min(run, l);
        int temp2 = i + 1;
        for (int j = 0; j < run; j++)
        {
            if ((temp[j] == 'A' && s[temp2] == 'T') || (temp[j] == 'T' && s[temp2] == 'A'))
            {
                bound++;
            }
            if ((temp[j] == 'C' && s[temp2] == 'G') || (temp[j] == 'G' && s[temp2] == 'C'))
            {
                bound++;
            }
            if (bound > M)
            {
                M = bound;
                k = i;
            }
            temp2++;
        }
    }
    cout << k + 1 << " " << M << endl;

    return 0;
}