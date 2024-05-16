#include <bits/stdc++.h>

using namespace std;

const int N = 1e7 + 10;
const int M = 1e9 + 7;

vector<int> fun(int A){
    vector<int>ans;
    for(int i=1;i*i<=A;i++){
        if(A%i==0){
            ans.push_back(i);
            // if(i!=sqrt(A))
            if(i==sqrt(A))
                continue;
            ans.push_back(A/i);
        }
    }
    sort(ans.begin(),ans.end());

    return ans;
}

int main()
{
    int n;
    cin>>n;
    vector<int>a=fun(n);

    for(auto i:a)
        cout<<i<<" ";
    cout<<endl;

    return 0;
}