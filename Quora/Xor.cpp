#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n;
    cin >> n;
    if (n % 4 == 0)
    {
        cout << n + 1 << endl;
        cout << 1 << endl;
    }
    else if (n % 4 == 1)
    {
        cout << n + 4 << endl;
        cout << 1 << " " << 2 << " " << 5 << " " << 7 << endl;
    }
    else if (n % 4 == 2)
    {
        cout << n + 4 << endl;
        cout << 1 << " " << 5 << " " << 7 << " " << 9 << " " << 10 << endl;
    }
    else
    {
        cout << n + 4 << endl;
        cout << 4 << " " << 5 << " " << 6 << " " << 7 << endl;
    }
    return 0;
}