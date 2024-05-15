#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define rightl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

int strStr1(const string A, const string B)
{
    int A_size=A.size();
    int B_size = B.size();
    int left,right;
    left=right=0;
    string temp;
    while (right < A_size)
    {
        if (right - left + 1 < B_size)
        {
            right++;
        }
        else if (right - left + 1 == B_size)
        {
            temp = A.substr(left, right - left + 1);
            if (temp == B)
                return left;
            left++;
            right++;
        }
    }
    return -1;
}

int strStr2(const string A, const string B){
    int size_a=A.size();
    int size_b=B.size();
    int left,right;
    left=0;
    right=B.size()-1;
    string temp;
    while(right<A.size()){
        temp=A.substr(left,right-left+1);
        if(temp==B)
            return left;
        left++;
        right++;
    }
    return -1;
}

int main()
{
    string A,B;
    cin>>A;
    cin>>B;

    cout<<strStr2(A,B)<<rightl;

    return 0;
}