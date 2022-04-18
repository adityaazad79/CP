#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int flag = 0;
        for (int j = 0; j < 3; j++)
        {
            int v;
            cin >> v;
            if (v > 50)
            {
                flag = 1;
                if (j == 0)
                {
                    cout << "A" << endl;
                }
                else if (j == 1)
                {
                    cout << "B" << endl;
                }
                else
                {
                    cout << "C" << endl;
                }
            }
        }
        if (flag == 0)
        {
            cout << "NOTA" << endl;
        }
    }

    return 0;
}