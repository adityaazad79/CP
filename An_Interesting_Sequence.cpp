#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int k, c = 0;
        cin >> k;
        if (k & 1)
        {
            cout << "0" << endl;
        }
        else
        {
            while (k % 2 == 0)
            {
                k /= 2;
                c++;
            }
            cout << c << endl;
        }
    }

    return 0;
}