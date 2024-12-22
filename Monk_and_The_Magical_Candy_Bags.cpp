#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

void fun1(){
    int ans=0,n,k,temp;
    cin>>n>>k;
    vector<long int>v;
    for (long int i=0;i<n;i++)
    {
        cin>>temp;
        v.push_back(temp);
    }
    multiset<long int>ms(v.begin(),v.end());

    for(int i=0;i<k;i++){
        ans+=*(--ms.end());
        ms.insert(*(--ms.end())/2);
        ms.erase(--ms.end());
    }

    cout<<ans<<endl;
}

void fun2(){
    int ans=0,n,k,temp;
    cin>>n>>k;
    vector<long int>v;
    for (long int i=0;i<n;i++)
    {
        cin>>temp;
        v.push_back(temp);
    }
    multiset<long int>ms(v.begin(),v.end());

    for(long int i=0;i<k;i++){
        auto it=*(ms.rbegin());
        ans+=it;
        temp=int(it);
        ms.insert(it/2);
        auto it2=ms.find(it);
        if(it2 != ms.end())
            ms.erase(it2);
    }

    cout<<ans<<endl;
}

void fun3(){
    int ans=0,n,k,temp;
    cin>>n>>k;
    vector<long int>v;
    for (long int i=0;i<n;i++)
    {
        cin>>temp;
        v.push_back(temp);
    }

    sort(v.begin(),v.end());
    for(int i=0;i<k;i++){
        temp=v.back();
        v.pop_back();
        ans+=temp;
        v.push_back(temp/2);
        sort(v.begin(),v.end());
    }

    cout<<ans<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long int t;
    cin>>t;
    long int n,k;
    long int temp,ans=0;
    while(t--){
        // fun1();
        // fun2();
        fun3();
    }
    

    return 0;
}