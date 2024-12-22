#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

void print(vector<int>&arr){
    cout<<"****************"<<endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"****************"<<endl;
    
}

void f(int n, vector<int> &arr, int x, int y, int target, int &ct, int c_val, int i, int cx, int cy)
{
    if (c_val == target && i==(n-1))
    {
        ct++;
        print(arr);
        return;
    }
    if (i == (n - 1) || i < 0 || x < cx || y < cy)
    {
        return;
    }
    
    
    f(n, arr, x, y, target, ct, c_val + arr[i], i - 1, cx + 1, cy);
    f(n, arr, x, y, target, ct, c_val + arr[i], i + 1, cx + 1, cy);
    f(n, arr, x, y, target, ct, c_val - arr[i], i + 1, cx, cy + 1);
    f(n, arr, x, y, target, ct, c_val - arr[i], i - 1, cx, cy + 1);
}

long long fun(int n, vector<int> &arr, int x, int y, int target)
{
    int ct = 0;
    f(n, arr, x, y, target, ct, 0, 0, 0, 0);
    return ct;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector<int> arr;
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        arr.push_back(temp);
    }
    int x, y;
    cin >> x >> y;
    int target;
    cin >> target;

    cout << fun(n, arr, x, y, target) << endl;

    return 0;
}