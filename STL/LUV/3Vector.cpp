#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

// void pvec(vector<int> v) // Caopies the vector. O(n)
void pvec(vector<int> &v) // References the address of the vector
{
    cout << "Size = " << v.size() << endl; // v.size = O(1)
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v; // Declaring an integer vector. Vector can be of any data type or container
    // vector<int> v(10); // Vector declared of size = 10 (Still can be increased) intitialised with 8. Default initialised with 0
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        // pvec(v);
        v.push_back(x); // Pushes one value to the vector from end. O(1)
    }
    pvec(v);      // calling pvec function
    v.pop_back(); // Removes last value from the vector
    pvec(v);
    vector<int> v2 = v; // Copies the vector. Refrain form copyint. Instead pass reference. O(n)

    return 0;
}