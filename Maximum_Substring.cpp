#include <bits/stdc++.h>

using namespace std;

const int N = 1e7 + 10;
const int M = 1e9 + 7;

int fun(string A, int B){
    int size=A.size();
    int ans=0;
    
    // cout<<size<<endl;

    int max=-1;
    for (int i=0;i<size;)
    {
        if(A[i]=='a')
            ans++;
        i++;
        // cout<<float(B)/float(i)<<endl;
        // cout<<float(i)/float(B)<<endl;
        if(float(B)/float(i)==1 || float(i)/float(B)==i/B){
            max=std::max(max,ans);
            ans=0;
            // cout<<"fs"<<endl;
        }
    }

    return std::max(max,ans);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string A;
    int B;
    cin>>A>>B;

    cout<<fun(A,B)<<endl;

    return 0;
}