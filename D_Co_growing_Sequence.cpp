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

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int temp;
        cin >> temp;
        int V;
        cout << "0 ";
        for (int i = 1; i < n; i++)
        {
            cin >> V;
            temp = temp | V;
            cout << (temp ^ V) << " ";
        }
        cout << endl;
    }

    return 0;
}

/*

1 - 0001 ^ 0000 = 0001 - 0
3 - 0011 ^ 0000 = 0011 - 0
7 - 0111 ^ 0000 = 0111 - 0
15- 1111 ^ 0000 = 1111 - 0

1 - 0001 ^ 0000 = 0001 - 0
2 - 0010 ^ 0001 = 0011 - 1
4 - 0100 ^ 0011 = 0111 - 3
8 - 1000 ^ 0111 = 1111 - 7

1 - 0001 ^ 0000 = 0001 - 0
2 - 0010 ^ 0001 = 0011 - 1
3 - 0011 ^ 0000 = 0011 - 0
4 - 0100 ^ 0011 = 0111 - 3
5 - 0101 ^ 0010 = 0111 - 2

11 - 1011 ^ 0000 = 1011 - 0
13 - 1101 ^ 0010 = 1111 - 2
15 - 1111 ^ 0000 = 1111 - 0
1  - 0001 ^ 1110 = 1111 - 14

*/