#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

int fun(vector<string> &A)
{
    int size = A.size();
    if(size==1)
        return stoi(A[0]);
    stack<int> S;
    int temp1, temp2;
    for (int i = 0; i < size;)
    {
        while(A[i] != "+" && A[i] != "-" && A[i] != "*" && A[i] != "/")
        {
            S.push(stoi(A[i]));
            // cout << A[i] << endl;
            i++;
        }
        while (A[i] == "+" || A[i] == "-" || A[i] == "*" || A[i] == "/")
        {
            // if (i >= size)
            //     break;
            temp1 = S.top();
            S.pop();
            temp2 = S.top();
            S.pop();
            // cout<<"dsf"<<endl;
            if (A[i] == "+")
            {
                temp2 = temp1 + temp2;
                // cout << "+" << endl;
                S.push(temp2);
            }
            else if (A[i] == "-")
            {
                temp2 = temp2 - temp1;
                // cout << "-" << endl;
                S.push(temp2);
            }
            else if (A[i] == "*")
            {
                temp2 = temp1 * temp2;
                // cout << "*" << endl;
                S.push(temp2);
            }
            else if (A[i] == "/")
            {
                temp2 = temp2 / temp1;
                // cout << "/" << endl;
                S.push(temp2);
            }
            i++;
            // if (i >= size)
            //     break;
        }
        // if (i >= size)
            // break;
        // cout << "Addsds " << A[i] << endl;
    }
    // cout << "Size : " << S.size() << endl;
    // cout << "temp2 : " << temp2 << endl;
    // while (!S.empty())
    // {
    //     cout << S.top() << endl;
    //     S.pop();
    // }
    // if (S.size() > 0)
    //     return S.top();
    // return 1;
    return S.top();
}

int fun2(vector<string> &A)
{
    stack<int> s;
    int n = A.size();

    for (int i = 0; i < n; i++)
    {
        if (A[i] == "+" or A[i] == "-" or A[i] == "*" or A[i] == "/")
        {
            int a = s.top();
            s.pop();

            int b = s.top();
            s.pop();

            int val;
            if (A[i] == "+")
                val = (a + b);
            else if (A[i] == "-")
                val = (a - b);
            else if (A[i] == "*")
                val = (a * b);
            else
                val = (a / b);
            s.push(val);
        }
        else
            s.push(stoi(A[i]));
    }
    return s.top();
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    string temp;
    vector<string> A;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        A.push_back(temp);
    }

    cout << fun(A) << endl;

    return 0;
}