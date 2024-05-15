#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

bool fun(vector<int> arrive, vector<int> depart, int K)
{
    int size = arrive.size();
    vector<pair<int, int>> V;

    int i;
    for (i = 0; i < size; i++)
    {
        V.push_back({arrive[i], 1});
        V.push_back({depart[i], -1});
    }
    sort(V.begin(), V.end());

    // Kadane's Algo
    int MAX = INT_MIN, max = 0;
    size *= 2;
    for (int i = 0; i < size; i++)
    {
        if (V[i].second > 0)
        {
            max++;
            MAX = std::max(max, MAX);
        }
        else
        {
            max--;
        }
    }

    return MAX <= K;
}

bool fun2(vector<int> &arrive, vector<int> &depart, int K)
{
    sort(begin(arrive), end(arrive));
    sort(begin(depart), end(depart));

    int size=arrive.size();
    int i;
    int max = 0;
    int MAX = 0;
    for(i=0;i<size;i++){
        if (arrive[i] <= depart[max])
        {
            if (MAX > K)
                return 0;
            MAX++;
        }
        else
            max++;
    }
    return MAX <= K;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector<int> arr;
    vector<int> dept;
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        arr.push_back(temp);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        dept.push_back(temp);
    }
    int c;
    cin >> c;

    bool b = fun2(arr, dept, c);

    cout << b << endl;

    return 0;
}