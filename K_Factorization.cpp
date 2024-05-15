#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

vector<int>sieve(){
    int arr[100000];
    for (int i = 0; i < 100000; i++)
        arr[i]=1;

    arr[2]=1;
    for (int i = 2; i*i <= 100000; i++)
    {
        for (int j = 2*i; j < 100000; j+=i)
        {
            arr[j]=0;
        }
    }
    
    vector<int>A;
    for (int i = 2; i < 100000; i++)
    {
        if(arr[i]){
            A.push_back(i);
        }
    }
    
    return A;

}

vector<int> fun(int A,int B){
    if(B==1)
        return {A};
    if(B>(floor(log2(A))))
        return {-1};
    vector<int>primes=sieve();
    vector<int>ans;
    int p=0,ct=0;

    int fl=0;

    while(A && A>=primes[p]){
        if(A%primes[p]==0){
            ans.push_back(primes[p]);
            ct++;
            A=A/primes[p];
            if(ct==B-1 && A>=2){
                ans[ans.size()-1]=A;
                ans.push_back(primes[p]);
                return ans;
            }
        }
        else{
            p++;
        }
    }

    return {-1};
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,k;
    cin>>n>>k;

    vector<int>ans=fun(n,k);

    for (int i = 0;i<ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    

    return 0;
}