#include <bits/stdc++.h>

using namespace std;

void generate(string &s,vector<string>&valid,int open,int close){
    if(open==0 && close==0){
        valid.push_back(s);
        return;
    }

    if(open>0){
        s.push_back('(');
        generate(s,valid,open-1,close);
        s.pop_back();
    }

    if(close>0 && open<close){
        s.push_back(')');
        generate(s,valid,open,close-1);
        s.pop_back();
    }
}

void fun(vector<string>&valid,int open,int close){
    string s;
    generate(s,valid,open,close);
}

int main(){
    string s;
    int open,close;
    cin>>open;
    close=open;

    vector<string>v;
    fun(v,open,close);

    for(auto S:v)
        cout<<S<<endl;

    return 0;
}