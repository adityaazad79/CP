#include<bits/stdc++.h>
using namespace std;
int main()
{
     /* arr |__1_____8_____3____4__| */
     int arr[10]={0};
    // arr[1]++;
    // arr[1]++;
    // if (arr[1]!=0){
    //     cout <<"p" <<endl;
    // }
    for (int i = 0; i < 10; i++)
    {
        int temp ;
        cin >> temp;
        if (arr[temp]){break;}
        arr[temp]=arr[temp]+1;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << i << " "<< arr[i] <<endl;   // you can find freq
    }
    int sum=0;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i]){
            sum+=i*arr[i];
        }
    }
    //cout <<bool(arr[5]) <<endl; // o(1) search 
    cout << "sum "<< sum << endl;
//     int a = 99999;
//    int l=ceil(log(a));
//    l/=2;
  // cout << l << endl;

    return 0;
}
