    #include <bits/stdc++.h>
    using namespace std;

    typedef unsigned long long ull;
    typedef long long ll;
    typedef long double ld;
    #define endl '\n'
    const int N = 1e7 + 10;
    const int M = 1e9 + 7;

    vector<string>fun(vector<string>A){
        int size=A.size();
        vector<string>ans;

        string temp;
        unordered_map<string,bool>ump;
        unordered_map<string,int>ump2;
        for (int i = 0; i < size; i++)
        {
            ump2[A[i]]++;
            if(ump[A[i]]==0){
                ump[A[i]]=1;
                ans.push_back("OK");
            }
            else{
                ans.push_back(A[i]+to_string(ump2[A[i]]-1));
            }
        }
        
        return ans;
    }

    int main()
    {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);

        int n;
        cin>>n;
        string temp;
        vector<string>A;
        for (int i = 0; i < n; i++)
        {
            cin>>temp;
            A.push_back(temp);
        }

        A=fun(A);
        for (int i = 0; i < n; i++)
        {
            cout<<A[i]<<endl;
        }

        return 0;
    }