/*
Array inside a vector
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v[3];
    // v[0] = {1,
    //         2,
    //         3,
    //         4,
    //         5,
    //         6,
    //         7,
    //         8,
    //         9};
    // v[1] = {5, 5, 5, 5, 5, 5};
    // v[2] = {6, 6, 6, 6, 6, 6};
    // v[0].push_back(10);
    int arr[5]={10, 10, 10, 10, 10};
   // v.push_back(arr[5]);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            int temp;
            cin >> temp;
            v[i].push_back(temp);
        }
    }
    for (auto val : v)
    {
        // for (int i = 0; i < val.size(); i++)
        // {
        //     cout << val[i] << " ";
        // }
        for (auto val2 : val)
        {
            cout << val2 << " ";
        }
        cout << endl;
    }
    return 0;
}
