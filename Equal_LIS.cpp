// Manish

#include <bits/stdc++.h>
using namespace std;
#define LL long long
int main()
{
    LL t;
    cin >> t;
    while (t--)
    {
        LL num;
        cin >> num;
        if (num & 1)
        {
            cout << "YES"
                 << "\n";
            for (int i = 1; i <= num; i += 2)
            {
                cout << i << " ";
            }
            for (int i = num - 1; i >= 2; i -= 2)
            {
                cout << i << " ";
            }
            cout << "\n";
        }
        else if (num != 2)
        {
            cout << "Yes"
                 << "\n";
            cout << num / 2 << " ";
            for (int i = 1; i < num / 2; i++)
            {
                cout << i << " ";
            }
            for (int i = num; i > num / 2; i--)
            {
                cout << i << " ";
            }
            cout << "\n";
        }
        else
        {
            cout << "NO"
                 << "\n";
        }
    }
}