#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

int fun(const string A){
    int ct=0;
    int size=A.size(),flag=0,i;
    for(i=0;i<size;i++){
        // cout<<"A[i] : "<<int(A[i])<<endl;
        // if((A[i]==32 || A[i]==43)&&!ct){
        //     ct++;
        //     continue;
        // }
        // if(A[i]==45 && !ct){
        //     ct++;
        //     flag=1;
        //     continue;
        // }
        // if((A[i]<47 || A[i]>57)){
        //     break;
        // }
        // ct++;
        if(A[i]==32){
            // ct++;
            continue;
        }
        break;
    }
    for(;i<size;i++){
        // if()
    }
    // cout<<"ct : "<<ct<<endl;
    size=ct;
    int ans=0;
    // cout<<A<<" Size : "<<size<<endl;
    int temp;
    for(int i=0;i<size;i++){
        if(A[i]>=47&&A[i]<=57){
            // cout<<A[i]-'0'<<" ";
            // ans=ans+(A[i]-'0');
            // ans=ans*pow(10,i+1);
            temp=A[i]-'0';
            // temp=temp*pow(10,(size-i-1));
            // ans=ans+temp;
            ans = (ans * 10) + (A[i] - '0');
            // cout<<ans<<endl;
            if(ans>INT_MAX || ans>INT_MAX+1){
                if(flag){
                    if(ans<INT_MIN)
                        return ans*-1;
                    return ans*-1;
                }
                return INT_MAX;
            }
            // cout<<temp<<endl;
        }
    }
    // cout<<endl;
    if(flag){
        ans=ans*-1;
        if(ans<INT_MIN)
            return INT_MIN;
        return int(ans);
    }
    if(ans>INT_MAX)
        return INT_MAX;
    return int(ans);
}

int fun2(const string A){
    int long long num = 0;
    bool flag = false;
    int i = 0;

    while (A[i] == ' ') {
        i++;
    }

    if (A[i] == '-') {
        flag = true;
        i++;
    }

    if (!flag && (A[i] == '+' || A[i] == '-')) {
        i++;
    }

    while (i < A.length()) {
        if (A[i] >= '0' && A[i] <= '9') {
            num = (num * 10) + (A[i] - '0');
        } else {
            break;
        }

        if (num >= 2147483648) {
            if (flag)
                return -2147483648;
            else
                return 2147483647;
        }

        i++;
        // cout<<"num : "<<num<<endl;
    }

    if (num == 0){
        return 0;
    }

    return flag ? -num : num;

}

int fun3(string A){
    int i=0;
    while(A[i]==32)
        i++;
    int flag=0;
    if(A[i]==45){
        flag=1;
        i++;
    }
    else if(A[i]==43)
        i++;
    int long long ans=0;
    int long long ll=INT_MIN,hl=INT_MAX;
    ll=-1*ll;
    while(A[i]>46 && A[i]<58){
        ans=(ans*10)+(A[i]-'0');
        // cout<<"ans : "<<ans<<endl;
        // if(ans>(-1*INT_MIN) && flag){
        if(ans>ll && flag){
            // cout<<"ans == "<<ans<<" ll== "<<ll<<endl;
            return INT_MIN;
        }
        // else if(ans>INT_MAX)
        else if(ans>hl){
            // cout<<"MAX == "<<ans<<endl;
            return hl;
        }
        i++;
    }
    if(flag)
        return int(-1*ans);
    return int(ans);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin>>s;
    // s="7 U 0 T7165 0128862 089 39 5";
    // s="5121478262 8070067M75 X199R 547 8C0A11 93I630 4P4071 029W433619 M3 5 14703818 776366059B9O43393";
    // s="-54332872018247709407 4 54";
    cout<<fun3(s)<<endl;
    // cout<<int(' ')<<endl;
    // char A[]="+7";
    // cout<<stoi(A);

    return 0;
}