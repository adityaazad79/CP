#include <bits/stdc++.h>

using namespace std;

const int N = 1e7 + 10;
const int M = 1e9 + 7;

int fun(vector<int>&A){
    int size=A.size();
    int ans=0;
    for (int i=0;i<size;i++)
        ans^=A[i];
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;
    vector<int>A;
    int temp;
    while (n--)
    {
        cin>>temp;
        A.push_back(temp);
    }

    cout<<fun(A)<<endl;
    

    return 0;
}