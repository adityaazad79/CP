#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

string insertTab(int tab){
    string ans;
    for(int i = 0; i < tab; ++i) ans += "\t";
    return ans;
}

vector<string> prettyJSON(string A) {
    if(A == "")
        return {};
    vector<string> ans;
    string k = "";
    int tab = 0;
    for(char c : A){
        if(c=='{' || c=='['){
            if(k != "") ans.push_back(insertTab(tab) + k);
            ans.push_back(insertTab(tab) + c);
            ++tab;
            k = "";
        }
        else if(c=='}' || c==']'){
            if(k != "") ans.push_back(insertTab(tab) + k);
            --tab;
            k = c;
        } 
        else if(c==','){
            k += c;
            ans.push_back(insertTab(tab) + k);
            k = "";
        }
        else{
            k += c;
        }
    }
    if(k!="")    ans.push_back(k);
    return ans;
}

vector<string> fun(string A){
    int size=A.size();
    vector<string>ans;
    string temp="";
    int sc=0;
    bool flag=0;
    int tp;
    for (int i = 0; i < size; i++)
    {
        if(flag && A[i]!='{' && A[i]!='[' && A[i]!=','){
            tp=sc;
            while (tp--)
                temp.push_back('\t');
            flag=0;
        }
        if(A[i]=='{' || A[i]=='['){
            if(temp.size())
                ans.push_back(temp);
            temp="";
            tp=sc;
            while(tp--)
                temp.push_back('\t');
            temp.push_back(A[i]);
            ans.push_back(temp);
            flag=1;
            temp="";
            sc++;
        }
        else if(A[i]==','){
            temp.push_back(A[i]);
            ans.push_back(temp);
            flag=1;
            temp="";
        }
        else if(A[i]=='}' || A[i]==']'){
            if(temp.size())
                ans.push_back(temp);
            temp="";
            sc--;
            tp=sc;
            while(tp--)
                temp.push_back('\t');
            temp.push_back(A[i]);
            if(A[i+1]==','){
                i++;
                temp.push_back(A[i]);
                ans.push_back(temp);
                temp="";
                flag=1;
                continue;
            }
            ans.push_back(temp);
            temp="";
            flag=0;
        }
        else
            temp.push_back(A[i]);
    }

    return ans;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string S;
    cin>>S;
    // S="{A:"B",C:{D:"E",F:{G:"H",I:"J"}}}";

    // vector<string>V=prettyJSON(S);
    vector<string>V=fun(S);
    for (int i = 0; i < V.size(); i++)
    {
        cout<<V[i]<<endl;
    }
    

    

    return 0;
}