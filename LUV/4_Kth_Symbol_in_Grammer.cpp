#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

void generate(int &n,int &k,int &ans,int c_level,int c_bit,int &l){
    // if(c_level==2){
    if(l+1==n){
        if(c_bit==0){
            if(k%2==0){
                ans=1;
            }
            else
                ans=0;
            return;
        }
        if(c_bit==1){
            if(k%2==0){
                ans=0;
            }
            else
                ans=1;
            return;
        }
    }

    if(pow(2,c_level) <k){
        if(c_bit==0){
            l++;
            generate(n,k,ans,c_level-1,1,l);
        }
        else if(c_bit==1){
            l++;
            generate(n,k,ans,c_level-1,0,l);
        }
    }
    else{
        if(c_bit==0){
            l++;
            generate(n,k,ans,c_level-1,0,l);
        }
        else if(c_bit==1){
            l++;
            generate(n,k,ans,c_level-1,1,l);
        }
    }

}


void generate2(int n,int k,int &ans,int c_level,int c_bit){
    if(c_level==n){
        if(c_bit==0){
            if(k%2==0)
                ans=1;
            else
                ans=0;
            return;
        }
        if(c_bit==1){
            if(k%2==0)
                ans=0;
            else
                ans=1;
            return;
        }
    }

    if(k > pow(2,(n-c_level))){
        if(c_bit==0){
            generate2(n,k-pow(2,n-c_level),ans,c_level+1,1);
        }
        else if(c_bit==1){
            generate2(n,k-pow(2,n-c_level),ans,c_level+1,0);
        }
    }
    else{
        if(c_bit==0){
            generate2(n,k-pow(2,n-c_level),ans,c_level+1,0);
        }
        else if(c_bit==1){
            generate2(n,k-pow(2,n-c_level),ans,c_level+1,1);
        }
    }
}

int fun(int n,int k){
    if(n<3){
        if(k==1 || k==4)
            return 0;
        return 1;
    }

    int ans,l=1;

    // generate(n,k,ans,n-2,0,l);
    generate2(n,k,ans,2,0);

    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,k;
    cin>>n>>k;

    cout<<fun(n,k)<<endl;

    return 0;
}