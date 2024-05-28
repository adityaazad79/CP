#include <bits/stdc++.h>
using namespace std;

void ref(int &a, int &b){
    int c=a;
    a=b;
    b=a;
}

int main(){
    int a=5, b=6;
    cout<<"a : "<<a
    ref(a,b);

    return 0;
}