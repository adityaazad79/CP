#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl '\n'
const int N = 1e7 + 10;
const int M = 1e9 + 7;

vector<int> nextPermutation(vector<int> &A) {
    int size=A.size();
    if(size==1)
        return A;
    int index=-1;
    int i;
    for(i=size-1;i>0;i--){
        if(A[i]>A[i-1]){
            index=i;
            break;
        }
    }
    
    // If the array is sorted in reverse
    if(index==-1){
        reverse(A.begin(),A.end());
        return A;
    }
    
    index--;
    // cout<<"i1 : "<<i<<endl;
    for(i=size-1;i>=index;i--){
        if(A[i]>A[index]){
            break;
        }
    }

    // cout<<"i2 : "<<i<<endl;

    // i--;
    // i++;
    A[index]=A[index]^A[i];
    A[i]=A[i]^A[index];
    A[index]=A[index]^A[i];
    // A[index]=A[index]^A[index-1];
    // A[index-1]=A[index-1]^A[index];
    // A[index]=A[index]^A[index-1];


    
    reverse(A.begin()+index+1,A.end());
    
    return A;
    
}


vector<int> nextPermutation2(vector<int> &A) {
    int n = A.size();
    int ind = -1;
    for(int i=n-2;i>=0;i--){
        if(A[i]<A[i+1]){
            ind = i;
            break;
        }
    }
    if(ind==-1){reverse(A.begin(),A.end());return A;}
   
    for(int i=n-1;i>=ind;i--){
        if(A[i]>A[ind]){
            swap(A[i],A[ind]);
            break;
        }
    }
    reverse(A.begin()+ind+1,A.end());
    return A;
}



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    int size=n;
    vector<int>A;
    int temp;
    while(n--){
        cin>>temp;
        A.push_back(temp);
    }

    A=nextPermutation(A);
    for (int i = 0; i <size ; i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
    

    

    return 0;
}


// 444 994 508 72 125 299 181 238 354 223 691, 249, 838, 890, 758, 675, 424, 199, 201, 788, 609, 582, 979, 259, 901, 371, 766, 759, 983, 728, 220, 16, 158, 822, 515, 488, 846, 321, 908, 469, 84, 460, 961, 285, 417, 142, 952, 626, 916, 247, 116, 975, 202, 734, 128, 312, 499, 274, 213, 208, 472, 265, 315, 335, 205, 784, 708, 681, 160, 448, 365, 165, 190, 693, 606, 226, 351, 241, 526, 311, 164, 98, 422, 363, 103, 747, 507, 669, 153, 856, 701, 319, 695, 52 ]
