#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v = {2, 3, 5, 6, 7};
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }

    vector<int>::iterator it;
    // or
    // auto it = v.begin();
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << (*it) << " ";
    }

    cout << endl;

    return 0;
}