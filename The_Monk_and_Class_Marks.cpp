// https://www.hackerearth.com/problem/algorithm/the-monk-and-class-marks/

#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

bool sortbysec(const pair<string,int> &a,const pair<string,int> &b)
{
    if(a.second==b.second)
        return (a.first<b.first);
    else
        return (a.second>b.second);
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;
    int itemp;
    string stemp;
    vector<pair<string,int>>vp;
    for (int i=0;i<n;i++)
    {
        cin>>stemp>>itemp;
        vp.push_back(make_pair(stemp,itemp));
    }
    sort(vp.begin(),vp.end(), sortbysec);

    for(auto it:vp)
        cout<<it.first<<" "<<it.second<<endl;
    

    return 0;
}