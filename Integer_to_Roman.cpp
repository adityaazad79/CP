#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

string fun(int A){
    int ct=0,d;
    vector<string>S;
    while(A){
        d=A%10;
        if(d==1){
            if(ct==1)
                S.push_back("X");
            else if(ct==2)
                S.push_back("C");
            else if(ct==3)
                S.push_back("M");
            else
                S.push_back("I");
        }
        else if(d==2){
            if(ct==1)
                S.push_back("XX");
            else if(ct==2)
                S.push_back("CC");
            else if(ct==3)
                S.push_back("MM");
            else
                S.push_back("II");
        }
        else if(d==3){
            if(ct==1)
                S.push_back("XXX");
            else if(ct==2)
                S.push_back("CCC");
            else if(ct==3)
                S.push_back("MMM");
            else
                S.push_back("III");
        }
        else if(d==4){
            if(ct==1)
                S.push_back("XL");
            else if(ct==2)
                S.push_back("CD");
            else if(ct==3)
                S.push_back("CM");
            else
                S.push_back("IV");
        }
        else if(d==5){
            if(ct==1)
                S.push_back("L");
            else if(ct==2)
                S.push_back("D");
            else
                S.push_back("V");
        }
        else if(d==6){
            if(ct==1)
                S.push_back("LX");
            else if(ct==2)
                S.push_back("DC");
            else
                S.push_back("VI");
        }
        else if(d==7){
            if(ct==1)
                S.push_back("LXX");
            else if(ct==2)
                S.push_back("DCC");
            else
                S.push_back("VII");
        }
        else if(d==8){
            if(ct==1)
                S.push_back("LXXX");
            else if(ct==2)
                S.push_back("DCCC");
            else
                S.push_back("VIII");
        }
        else if(d==9){
            if(ct==1)
                S.push_back("XC");
            else if(ct==2)
                S.push_back("CM");
            else
                S.push_back("IX");
        }
        A=A/10;
        ct++;
    }
    string ans;
    for (int i = S.size()-1; i >= 0; i--)
        ans.append(S[i]);
    
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;
    cout<<fun(n)<<endl;

    return 0;
}