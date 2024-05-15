#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

int fun(string A){
    int size=A.size();
    if(!size)
        return 0;
    int len=0,i=size-1;
    while(A[i]==' ')
        i--;
    while(A[i]!=' '&&i-->=0)
        len++;
    // for (;A[i]!=' ' && i>=0;i--)
        // len++;
    return len;
}

int lengthOfLastWord(const string A)
{
    if (A.size() == 0)
        return 0;
    int count = 0;
    int l = A.size() - 1;
    for (int i = A.size() - 1; i >= 0; i--)
    {
        if (A[i] != ' ')
        {
            l = i;
            break;
        }
    }
    for (int i = l; i >= 0; i--)
    {
        if (A[i] == ' ')
            break;
        else
        {
            count++;
        }
    }
    return count;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s="Hello world";
    // string s = "      dsfsf   InterviewBit         ";
    cout << fun(s) << endl;

    return 0;
}